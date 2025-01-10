void main()
{
	//INIT ECONOMY--------------------------------------
	Hive ce = CreateHive();
	if ( ce )
		ce.InitOffline();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 8, reset_day = 10;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}
}

//class CustomMission: MissionServer
//{
//	void SetRandomHealth(EntityAI itemEnt)
//	{
//		if ( itemEnt )
//		{
//			float rndHlt = Math.RandomFloat( 0.45, 0.65 );
//			itemEnt.SetHealth01( "", "", rndHlt );
//		}
//	}
//
//	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
//	{
//		Entity playerEnt;
//		playerEnt = GetGame().CreatePlayer( identity, characterName, pos, 0, "NONE" );
//		Class.CastTo( m_player, playerEnt );
//
//		GetGame().SelectPlayer( identity, m_player );
//
//		return m_player;
//	}
//
//	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
//	{
//		EntityAI itemClothing;
//		EntityAI itemEnt;
//		ItemBase itemBs;
//		float rand;
//
//		itemClothing = player.FindAttachmentBySlotName( "Body" );
//		if ( itemClothing )
//		{
//			SetRandomHealth( itemClothing );
//			
//			itemEnt = itemClothing.GetInventory().CreateInInventory( "BandageDressing" );
//			player.SetQuickBarEntityShortcut(itemEnt, 2);
//
//			string chemlightArray[] = { "Chemlight_White", "Chemlight_Yellow", "Chemlight_Green", "Chemlight_Red" };
//			int rndIndex = Math.RandomInt( 0, 4 );
//			itemEnt = itemClothing.GetInventory().CreateInInventory( chemlightArray[rndIndex] );
//			player.SetQuickBarEntityShortcut(itemEnt, 1);
//			SetRandomHealth( itemEnt );
//		}
//		
//		itemClothing = player.FindAttachmentBySlotName( "Legs" );
//		if ( itemClothing )
//			SetRandomHealth( itemClothing );
//		
//		itemClothing = player.FindAttachmentBySlotName( "Feet" );
//	}
//};

class CustomMission: MissionServer

{
	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
		Class.CastTo(m_player, playerEnt);
		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	void addMags(PlayerBase player, string mag_type, int count)
	{
		if (count < 1)
			return;

		EntityAI mag;

		for (int i = 0; i < count; i++) {
			mag = player.GetInventory().CreateInInventory(mag_type);
		}

		player.SetQuickBarEntityShortcut(mag, 1, true);
	}

	EntityAI assaultClass(PlayerBase player)
	{
		EntityAI gun = player.GetHumanInventory().CreateInHands("M4A1");
		gun.GetInventory().CreateAttachment("M4_RISHndgrd_Black");
		gun.GetInventory().CreateAttachment("M4_MPBttstck_Black");
		gun.GetInventory().CreateAttachment("ACOGOptic");
		addMags(player, "Mag_STANAG_30Rnd", 3);

		return gun;
	}

	EntityAI sniperClass(PlayerBase player)
	{
		EntityAI gun = player.GetHumanInventory().CreateInHands("SVD");
		gun.GetInventory().CreateAttachment("PSO1Optic");
		addMags(player, "Mag_SVD_10Rnd", 3);

		return gun;
	}

	EntityAI smgClass(PlayerBase player)
	{
		EntityAI gun = player.GetHumanInventory().CreateInHands("UMP45");
		gun.GetInventory().CreateAttachment("PistolSuppressor");
		addMags(player, "Mag_UMP_25Rnd", 3);

		return gun;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();
		
		player.GetInventory().CreateInInventory("Ushanka_Black");
		player.GetInventory().CreateInInventory("CombatBoots_Black");
		player.GetInventory().CreateInInventory("CargoPants_Black");
		player.GetInventory().CreateInInventory("ServerWiki_Jacke");
		player.GetInventory().CreateInInventory("Battery9V");
		player.GetInventory().CreateInInventory("Battery9V");
		ItemBase rags = player.GetInventory().CreateInInventory("Rag");
		rags.SetQuantity(4);

		EntityAI primary;
		EntityAI axe = player.GetInventory().CreateInInventory("FirefighterAxe");

		switch (Math.RandomInt(0, 3)) {
			case 0: primary = assaultClass(player); break;
			case 1: primary = sniperClass(player); break;
			case 2: primary = smgClass(player); break;
		}

		player.LocalTakeEntityToHands(primary);
		player.SetQuickBarEntityShortcut(primary, 0, true);
		player.SetQuickBarEntityShortcut(rags, 2, true);
		player.SetQuickBarEntityShortcut(axe, 3, true);
	}
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
}
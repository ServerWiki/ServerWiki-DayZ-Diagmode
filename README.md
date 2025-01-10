## Voraussetzungen für die Installation:

### Bevor du beginnst, stelle sicher, dass du ein grundlegendes Verständnis von PC-Bedienung hast. Es wird vorausgesetzt, dass du:
- In der Lage bist, Ordner auf deinem Computer zu finden und zu navigieren.
- Dateien herunterladen und entpacken kannst.
- Eine Textdatei bearbeiten kannst.

### Außerdem benötigst du:
- Einen funktionierenden PC mit installiertem Steam und DayZ.
- Zugang zum DayZ-Installationsordner.

### Versteckte Dateiendungen anzeigen:
Um sicherzustellen, dass du alle Dateien sehen kannst, einschließlich versteckter Dateien und Dateiendungen, folge diesen Schritten:
- Windows Explorer öffnen:
 - Öffne den Windows Explorer (Dateimanager).
- Ansicht der versteckten Dateien aktivieren:
 - Klicke auf den Reiter Ansicht oben im Explorer-Fenster.
 - Setze ein Häkchen bei Ausgeblendete Elemente, um versteckte Dateien und Ordner anzuzeigen.
- Dateiendungen anzeigen:
 - Unter dem selben Reiter Ansicht findest du ebenfalls die Option Dateinamenerweiterungen. Setze hier ebenfalls ein Häkchen, damit du die Endungen wie .bat oder .cfg siehst.

__**Um den DayZ Installationsordner auf deinem Computer zu finden, kannst du folgenden Schritt ausführen:**__
### Über Steam:
 - Öffne den Steam-Client.
 - Gehe in deine Bibliothek.
 - Rechtsklicke auf DayZ und wähle Eigenschaften.
 - Wechsle zum Reiter Installierte Dateien.
 - Klicke auf Durchsuchen – dadurch öffnet sich der Installationsordner von DayZ im Dateimanager.
__**Standardpfad (Windows):**__
Falls du den Pfad manuell suchen möchtest, der Standardpfad ist normalerweise:
```
C:\Program Files (x86)\Steam\steamapps\common\DayZ
```

# Installation:
### Download Link:
__**[ServerWiki-DayZ-Diagmode](<https://drive.google.com/file/d/1fFG-zRhIufyF7t0wbMqHxS8F5H0ZyG4v/view?usp=sharing>)**__

### Dateien aus der „Install_DayZ-Diagmode.rar“ in das DayZ-Verzeichnis kopieren:
- Kopiere die Dateien aus der `Install_DayZ-Diagmode.rar` in den zuvor gefundenen DayZ Installationsordner.

### Deinen DayZ Installationsordner in die Konfigurationsdatei eintragen:
- Wenn du DayZ auf einem anderen Laufwerk als `C:\Program Files (x86)\Steam\steamapps\common\DayZ` installiert hast, bearbeite die `Datei DayZ-Diagmode\Globals.cfg` manuell und trage den richtigen DayZ Installationsordner ein.
 - Öffne die Datei `Globals.cfg` in einem Texteditor (z.B. Notepad, VS-Code).
 - Füge den vollständigen Pfad bei dem Punkt `game_dir=` ein (z.B. C:\Program Files (x86)\Steam\steamapps\common\DayZ).

## Installation starten:
- Führe die Datei `Install_DayZ-Diagmode.bat` im DayZ Installationsordner aus und folge den Anweisungen, um die Installation abzuschließen.

### Desktop-Verknüpfung erstellen:
- Navigiere zum Verzeichnis `\DayZ-Diagmode`, das durch die Installation erstellt wurde.
- Rechtsklicke auf das Verzeichnis und wähle Senden an > Desktop (Verknüpfung erstellen).
 - Dadurch erhältst du schnellen Zugriff auf das Verzeichnis direkt von deinem Desktop aus.

### Start_Server_(C)herno_oder_(E)noch.bat ausführen:
- Öffne das verknüpfte Verzeichnis `DayZ-Diagmode` über die Desktop-Verknüpfung.
- Doppelklicke auf die Datei `Start_Server_(C)herno_oder_(E)noch.bat` im geöffneten Verzeichnis.
 - Dies führt die Datei aus und aktiviert den Diagnosemodus und Startet den Lokalen Server und das Spiel.


## Verwendung von VPPAdminTools
Sobald dein Server gestartet ist, bist du bereit, die VPPAdminTools zu nutzen.
- Verbinde dich mit deinem Server.
- Drücke die ESC-Taste und navigiere zu deinen Tastenbelegungen.
 - VPP hat eine eigene Liste von Tastenbelegungen, in der du alle relevanten Tastenbelegungen findest.
- Drücke die ENDE-Taste (rot markiert), um die VPPAdminTools zu aktivieren.
- Drücke die POS1-Taste (blau markiert), um das VPP Admin Tool zu öffnen.
_Du hast nun vollen Zugriff auf die Admin-Tools._
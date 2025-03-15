# DayZ Diagnosemodus Installation

## Voraussetzungen für die Installation

### Bevor du beginnst, stelle sicher, dass du ein grundlegendes Verständnis von PC-Bedienung hast. Es wird vorausgesetzt, dass du:

- In der Lage bist, Ordner auf deinem Computer zu finden und zu navigieren.
- Dateien herunterladen und entpacken kannst.
- Eine Textdatei bearbeiten kannst.

### Außerdem benötigst du:

- Einen funktionierenden PC mit installiertem Steam und DayZ.
- Zugang zum DayZ-Installationsordner.

## Versteckte Dateiendungen anzeigen

Um sicherzustellen, dass du alle Dateien sehen kannst, einschließlich versteckter Dateien und Dateiendungen, folge diesen Schritten:

1. **Windows Explorer öffnen:**  
   - Öffne den Windows Explorer (Dateimanager).

2. **Ansicht der versteckten Dateien aktivieren:**  
   - Klicke auf den Reiter `Ansicht` oben im Explorer-Fenster.  
   - Setze ein Häkchen bei `Ausgeblendete Elemente`, um versteckte Dateien und Ordner anzuzeigen.

3. **Dateiendungen anzeigen:**  
   - Unter dem selben Reiter `Ansicht` findest du ebenfalls die Option `Dateinamenerweiterungen`.  
   - Setze hier ebenfalls ein Häkchen, damit du die Endungen wie `.bat` oder `.cfg` siehst.

## DayZ Installationsordner finden

### Über Steam

1. Öffne den Steam-Client.
2. Gehe in deine Bibliothek.
3. Rechtsklicke auf `DayZ` und wähle `Eigenschaften`.
4. Wechsle zum Reiter `Installierte Dateien`.
5. Klicke auf `Durchsuchen` – dadurch öffnet sich der Installationsordner von DayZ im Dateimanager.

**Standardpfad (Windows):** Falls du den Pfad manuell suchen möchtest, der Standardpfad ist normalerweise:

```
C:\Program Files (x86)\Steam\steamapps\common\DayZ
```

# Installation

## Dateien herunterladen

Die benötigten Dateien können als ZIP-Archiv direkt von GitHub heruntergeladen werden.

### So lädst du das Repository als ZIP herunter:

1. Besuche die GitHub-Seite des Projekts in deinem Webbrowser.
2. Klicke oben rechts auf die grüne Schaltfläche **Code**.
3. Wähle die Option **Download ZIP** aus dem Dropdown-Menü.
4. Speichere die ZIP-Datei an einem leicht zugänglichen Ort auf deinem PC, z. B. auf dem Desktop.
5. Entpacke die ZIP-Datei, indem du mit der rechten Maustaste darauf klickst und `Alle extrahieren` auswählst.
6. Navigiere in den entpackten Ordner, um die Dateien zu verwenden.

## Dateien in das DayZ-Verzeichnis kopieren

- Kopiere die entpackten Dateien in den zuvor gefundenen DayZ Installationsordner.

## Deinen DayZ Installationsordner in die Konfigurationsdatei eintragen

Falls du DayZ auf einem anderen Laufwerk als `C:\Program Files (x86)\Steam\steamapps\common\DayZ` installiert hast:

1. Bearbeite die Datei `DayZ-Diagmode/Globals.cfg` manuell.
2. Öffne die Datei `Globals.cfg` in einem Texteditor (z.B. Notepad, VS-Code).
3. Füge den vollständigen Pfad bei dem Punkt `game_dir=` ein:

   ```
   game_dir=C:\Program Files (x86)\Steam\steamapps\common\DayZ
   ```

## Installation starten

- Führe die Datei `Install_DayZ-Diagmode.bat` im DayZ Installationsordner aus und folge den Anweisungen, um die Installation abzuschließen.

## Desktop-Verknüpfung erstellen

1. Navigiere zum Verzeichnis `\DayZ-Diagmode`, das durch die Installation erstellt wurde.
2. Rechtsklicke auf das Verzeichnis und wähle `Senden an > Desktop (Verknüpfung erstellen)`.
3. Dadurch erhältst du schnellen Zugriff auf das Verzeichnis direkt von deinem Desktop aus.

## Diagnosemodus starten

1. Öffne das verknüpfte Verzeichnis `DayZ-Diagmode` über die Desktop-Verknüpfung.
2. Doppelklicke auf die Datei `Start_Server_(C)herno_oder_(E)noch.bat`.
3. Der Diagnosemodus wird aktiviert, der lokale Server und das Spiel werden gestartet.

# Verwendung von VPPAdminTools

Sobald dein Server gestartet ist, bist du bereit, die **VPPAdminTools** zu nutzen.

1. Verbinde dich mit deinem Server.
2. Drücke die `ESC-Taste` und navigiere zu den Tastenbelegungen.
3. VPP hat eine eigene Liste von Tastenbelegungen, in der du alle relevanten Einstellungen findest.
4. Drücke die `ENDE-Taste` (rot markiert), um die VPPAdminTools zu aktivieren.
5. Drücke die `POS1-Taste` (blau markiert), um das VPP Admin Tool zu öffnen.

**Du hast nun vollen Zugriff auf die Admin-Tools!**
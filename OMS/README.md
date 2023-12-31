# Plugin Guide

1. Create a Plugins folder for your project (outside of the content folder) if needed and drag the OMS folder in.
2. Enable Epic Online Subsystem Steam in the Plugins window and restart your project.
3. Copy the Finished settings from the following link and paste them into your DefaultEngine.ini file: https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Online/Steam/
4. Add the following lines to your DefaultGame.ini file:
   [/Script/Engine.GameSession]
   MaxPlayers=100

## Some potential troubleshooting steps
1. Delete the Binaries and Intermediate folders from OMS.
2. Right click on your main UProject and rebuild the Visual Studio Files.
3. Run your UProject and select Yes on startup.

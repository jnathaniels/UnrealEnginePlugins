To properly utalize this plugin you must perform a few steps.

1. Enable Epic Online Subsystem Steam in the Plugins window and restart your project.
2. Copy the Finished settings from the following link and paste them into your DefaultEngine.ini file: https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/Online/Steam/
3. Add the following lines to your DefaultGame.ini file:
   [/Script/Engine.GameSession]
   MaxPlayers=100

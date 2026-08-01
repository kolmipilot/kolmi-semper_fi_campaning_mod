class CfgRespawnTemplates
{
    // Class used in respawnTemplates entry
    class GVAR(tickeWaveRespawn) {
        displayName = CSTRING(DisplayName_TicketSystem);
        onPlayerKilled = QFUNC(handleOnPlayerKilled);
        onPlayerRespawn = QFUNC(initRespawnPlayer);
        respawnDelay = 10e10;
        respawnOnStart = -1;
        respawnButton = 0;
        respawnDialog = 0;
        respawnTypes[] = {3};
        isCall = 1;
    };
};

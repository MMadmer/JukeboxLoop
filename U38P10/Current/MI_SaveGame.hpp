#ifndef UE4SS_SDK_MI_SaveGame_HPP
#define UE4SS_SDK_MI_SaveGame_HPP

class UMI_SaveGame_C : public USaveGame
{
    FMI_Config ServerConfig;
    bool RequestSync;
    bool Unsafe;

};

#endif

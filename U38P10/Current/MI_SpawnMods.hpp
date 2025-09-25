#ifndef UE4SS_SDK_MI_SpawnMods_HPP
#define UE4SS_SDK_MI_SpawnMods_HPP

class AMI_SpawnMods_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    FString ModSavePath;
    TArray<TSoftClassPtr<AActor>> SpaceRigMods;
    TArray<TSoftClassPtr<AActor>> CaveMods;
    FMI_Config Config;
    TSet<AController*> JoinedPlayerControllers;
    class UMI_SaveGame_C* save;
    class AMI_ReplicatedConfig_C* HostConfig;

    void GetModPages(TArray<FScriptInterface>& HubPages);
    void GetModInfo(FText& ModName, FText& ModAuthor, FText& ModVersion);
    void ModRegistered(FScriptInterface Hub);
    void ModHubClosed();
    void ModHubOpened();
    void ReceiveBeginPlay();
    void SpawnMods();
    void CheckServerConfig();
    void ExecuteUbergraph_MI_SpawnMods(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_MI_ReplicatedConfig_HPP
#define UE4SS_SDK_MI_ReplicatedConfig_HPP

class AMI_ReplicatedConfig_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;
    FMI_Config Config;
    bool ReceivedConfig;

    void OnRep_Config();
};

#endif

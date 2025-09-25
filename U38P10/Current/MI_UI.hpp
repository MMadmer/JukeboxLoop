#ifndef UE4SS_SDK_MI_UI_HPP
#define UE4SS_SDK_MI_UI_HPP

class UMI_UI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* HostMods;
    class UImage* Image;
    class UImage* Image_110;
    class UMI_UI_ModList_C* MI_UI_ModList_Host;
    class UMI_UI_ModList_C* MI_UI_ModList_Local;
    class UTextBlock* TitleHost;
    class UTextBlock* TitleLocal;
    class AMI_SpawnMods_C* ModIntegration;

    void GetContainerMode(bool& bStretchToContainer);
    void GetPageInfo(FText& PageName);
    void HubPageClosed();
    void HubPageOpened();
    void Construct();
    void ExecuteUbergraph_MI_UI(int32 EntryPoint);
};

#endif

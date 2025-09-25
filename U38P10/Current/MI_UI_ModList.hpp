#ifndef UE4SS_SDK_MI_UI_ModList_HPP
#define UE4SS_SDK_MI_UI_ModList_HPP

class UMI_UI_ModList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* VerticalBox_Mods;
    TArray<FMI_Mod> Mods;

    void Set Mods(const TArray<FMI_Mod>& Array);
    void ExecuteUbergraph_MI_UI_ModList(int32 EntryPoint);
};

#endif

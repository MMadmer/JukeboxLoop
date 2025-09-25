#ifndef UE4SS_SDK_MI_UI_Mod_HPP
#define UE4SS_SDK_MI_UI_Mod_HPP

class UMI_UI_Mod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_158;
    class UTextBlock* Name;
    class UTextBlock* URL;
    FMI_Mod Mod;

    void Construct();
    void ExecuteUbergraph_MI_UI_Mod(int32 EntryPoint);
};

#endif

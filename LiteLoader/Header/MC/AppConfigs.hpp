/**
 * @file  AppConfigs.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppConfigs.
 *
 */
class AppConfigs {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPCONFIGS
public:
    class AppConfigs& operator=(class AppConfigs const &) = delete;
    AppConfigs(class AppConfigs const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~AppConfigs();
    /**
     * @vtable 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vtable 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vtable 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vtable 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vtable 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vtable 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vtable 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vtable 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vtable 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vtable 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vtable 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vtable 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vtable 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vtable 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vtable 17
     * @symbol __unk_vfn_17
     */
    virtual void __unk_vfn_17();
    /**
     * @vtable 18
     * @symbol ?getEducationEditionOffering@AppConfigs@@UEBA?AW4EducationEditionOffer@@XZ
     */
    virtual enum EducationEditionOffer getEducationEditionOffering() const;
    /**
     * @vtable 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vtable 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vtable 21
     * @symbol ?supports3DExport@AppConfigs@@UEBA_NXZ
     */
    virtual bool supports3DExport() const;
    /**
     * @vtable 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vtable 23
     * @symbol ?getConnectionDefinition@AppConfigs@@UEBA?AUConnectionDefinition@@XZ
     */
    virtual struct ConnectionDefinition getConnectionDefinition() const;
    /**
     * @vtable 24
     * @symbol __unk_vfn_24
     */
    virtual void __unk_vfn_24();
    /**
     * @vtable 25
     * @symbol __unk_vfn_25
     */
    virtual void __unk_vfn_25();
    /**
     * @vtable 26
     * @symbol __unk_vfn_26
     */
    virtual void __unk_vfn_26();
    /**
     * @vtable 27
     * @symbol __unk_vfn_27
     */
    virtual void __unk_vfn_27();
    /**
     * @vtable 28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vtable 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vtable 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vtable 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vtable 32
     * @symbol ?getAdditionalClientPacks@AppConfigs@@UEBA?AV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@_N@Z
     */
    virtual std::vector<struct PackIdVersion> getAdditionalClientPacks(bool) const;
    /**
     * @vtable 33
     * @symbol ?getScreenCapabilities@AppConfigs@@UEBA?AV?$unique_ptr@VIScreenCapabilities@@U?$default_delete@VIScreenCapabilities@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    virtual std::unique_ptr<class IScreenCapabilities> getScreenCapabilities(std::string const &) const;
    /**
     * @vtable 34
     * @symbol ?createContentAccessibility@AppConfigs@@UEBA?AV?$unique_ptr@VIContentAccessibilityProvider@@U?$default_delete@VIContentAccessibilityProvider@@@std@@@std@@V?$not_null@V?$NonOwnerPointer@VIEntitlementManager@@@Bedrock@@@gsl@@@Z
     */
    virtual std::unique_ptr<class IContentAccessibilityProvider> createContentAccessibility(class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntitlementManager>>) const;
    /**
     * @vtable 35
     * @symbol ?getFeedbackURL@AppConfigs@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getFeedbackURL() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPCONFIGS
    /**
     * @vtable -1
     * @symbol ?allowGameArguments@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool allowGameArguments() const;
    /**
     * @vtable -1
     * @symbol ?applyLevelDataOverride@AppConfigs@@UEBAXAEAVLevelData@@@Z
     */
    MCVAPI void applyLevelDataOverride(class LevelData &) const;
    /**
     * @vtable -1
     * @symbol ?areEmotesSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areEmotesSupported() const;
    /**
     * @vtable -1
     * @symbol ?arePremiumSkinPacksAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool arePremiumSkinPacksAllowed() const;
    /**
     * @vtable -1
     * @symbol ?areQuizzesSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areQuizzesSupported() const;
    /**
     * @vtable -1
     * @symbol ?areResourcePacksAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool areResourcePacksAllowed() const;
    /**
     * @vtable -1
     * @symbol ?canUseAzureNotebooks@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool canUseAzureNotebooks() const;
    /**
     * @vtable -1
     * @symbol ?canUseMaelstrom@AppConfigs@@UEBA?AW4MaelstromEduUsabilityStatus@1@XZ
     */
    MCVAPI enum AppConfigs::MaelstromEduUsabilityStatus canUseMaelstrom() const;
    /**
     * @vtable -1
     * @symbol ?gameArgumentsNeedAuthentication@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool gameArgumentsNeedAuthentication() const;
    /**
     * @vtable -1
     * @symbol ?isChatScreenAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isChatScreenAllowed() const;
    /**
     * @vtable -1
     * @symbol ?isCoursesCacheEnabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isCoursesCacheEnabled() const;
    /**
     * @vtable -1
     * @symbol ?isExternalPlayerCommunicationAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isExternalPlayerCommunicationAllowed() const;
    /**
     * @vtable -1
     * @symbol ?isGameTabShownInSettings@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isGameTabShownInSettings() const;
    /**
     * @vtable -1
     * @symbol ?isLessonProgressionSupported@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isLessonProgressionSupported() const;
    /**
     * @vtable -1
     * @symbol ?isPlayScreenAllowed@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool isPlayScreenAllowed() const;
    /**
     * @vtable -1
     * @symbol ?loadFromData@AppConfigs@@UEAAXAEBVIAppConfigData@@@Z
     */
    MCVAPI void loadFromData(class IAppConfigData const &);
    /**
     * @vtable -1
     * @symbol ?muteByDefault@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool muteByDefault() const;
    /**
     * @vtable -1
     * @symbol ?requireEduLevelSettings@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool requireEduLevelSettings() const;
    /**
     * @vtable -1
     * @symbol ?requireTrustedContent@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool requireTrustedContent() const;
    /**
     * @vtable -1
     * @symbol ?sendPermissionsTelemetry@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool sendPermissionsTelemetry() const;
    /**
     * @vtable -1
     * @symbol ?setCanAccessWorldCallback@AppConfigs@@UEAAXAEAVIMinecraftGame@@@Z
     */
    MCVAPI void setCanAccessWorldCallback(class IMinecraftGame &);
    /**
     * @vtable -1
     * @symbol ?shouldPromptBeforeExit@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool shouldPromptBeforeExit() const;
    /**
     * @vtable -1
     * @symbol ?supportsChangingMultiplayerDuringPlay@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool supportsChangingMultiplayerDuringPlay() const;
    /**
     * @vtable -1
     * @symbol ?useEduDemoUpsellDialog@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useEduDemoUpsellDialog() const;
    /**
     * @vtable -1
     * @symbol ?useFullScreenByDefault@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useFullScreenByDefault() const;
    /**
     * @vtable -1
     * @symbol ?useNormalizedFontSize@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool useNormalizedFontSize() const;
    /**
     * @vtable -1
     * @symbol ?webSocketsDisabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool webSocketsDisabled() const;
    /**
     * @vtable -1
     * @symbol ?worldBuilderDisabled@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool worldBuilderDisabled() const;
    /**
     * @vtable -1
     * @symbol ?worldsAreSingleUse@AppConfigs@@UEBA_NXZ
     */
    MCVAPI bool worldsAreSingleUse() const;
#endif
    /**
     * @symbol ??0AppConfigs@@QEAA@XZ
     */
    MCAPI AppConfigs();

};
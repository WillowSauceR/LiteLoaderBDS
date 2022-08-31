/**
 * @file  DirectoryPackWithEncryptionAccessStrategy.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DirectoryPackWithEncryptionAccessStrategy.
 *
 */
class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
public:
    class DirectoryPackWithEncryptionAccessStrategy& operator=(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy(class DirectoryPackWithEncryptionAccessStrategy const &) = delete;
    DirectoryPackWithEncryptionAccessStrategy() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
    /**
     * @vtable 1
     * @symbol ?getPackSize@DirectoryPackWithEncryptionAccessStrategy@@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @vtable 2
     * @symbol ?getPackLocation@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBVResourceLocation@@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @vtable 3
     * @symbol ?getPackName@DirectoryPackWithEncryptionAccessStrategy@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @vtable 4
     * @symbol ?isWritable@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @vtable 5
     * @symbol ?setIsTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEAAX_N@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @vtable 6
     * @symbol ?isTrusted@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @vtable 7
     * @symbol ?hasAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@_N@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @vtable 8
     * @symbol ?hasFolder@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @vtable 9
     * @symbol ?getAsset@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @vtable 10
     * @symbol ?deleteAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @vtable 11
     * @symbol ?writeAsset@DirectoryPackWithEncryptionAccessStrategy@@UEAA_NAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @vtable 12
     * @symbol ?forEachIn@DirectoryPackWithEncryptionAccessStrategy@@UEBAXAEBVPath@Core@@V?$function@$$A6AXAEBVPath@Core@@@Z@std@@_N@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @vtable 14
     * @symbol ?getStrategyType@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AW4PackAccessStrategyType@@XZ
     */
    virtual enum PackAccessStrategyType getStrategyType() const;
    /**
     * @vtable 16
     * @symbol ?createSubPack@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AV?$unique_ptr@VPackAccessStrategy@@U?$default_delete@VPackAccessStrategy@@@std@@@std@@AEBVPath@Core@@@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @vtable 17
     * @symbol ?generateAssetSet@DirectoryPackWithEncryptionAccessStrategy@@UEAA?AW4PackAccessAssetGenerationResult@@XZ
     */
    virtual enum PackAccessAssetGenerationResult generateAssetSet();
    /**
     * @vtable 19
     * @symbol ?unload@DirectoryPackWithEncryptionAccessStrategy@@UEAAXXZ
     */
    virtual void unload();
    /**
     * @vtable 20
     * @symbol ?hasUpgradeFiles@DirectoryPackWithEncryptionAccessStrategy@@UEBA_NXZ
     */
    virtual bool hasUpgradeFiles() const;
    /**
     * @vtable 21
     * @symbol ?readContentIdentity@DirectoryPackWithEncryptionAccessStrategy@@UEBA?AVContentIdentity@@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKWITHENCRYPTIONACCESSSTRATEGY
#endif
    /**
     * @symbol ??0DirectoryPackWithEncryptionAccessStrategy@@QEAA@AEBVResourceLocation@@0AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    MCAPI DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const &, class ResourceLocation const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);

//private:
    /**
     * @symbol ?_getUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool _getUnencryptedAsset(class Core::Path const &, std::string &) const;
    /**
     * @symbol ?_hasUnencryptedAsset@DirectoryPackWithEncryptionAccessStrategy@@AEBA_NAEBVPath@Core@@@Z
     */
    MCAPI bool _hasUnencryptedAsset(class Core::Path const &) const;

private:

};
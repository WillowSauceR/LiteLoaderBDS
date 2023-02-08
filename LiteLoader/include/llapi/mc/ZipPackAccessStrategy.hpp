/**
 * @file  ZipPackAccessStrategy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ZipPackAccessStrategy.
 *
 */
class ZipPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZIPPACKACCESSSTRATEGY
public:
    class ZipPackAccessStrategy& operator=(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy(class ZipPackAccessStrategy const &) = delete;
    ZipPackAccessStrategy() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ZipPackAccessStrategy();
    /**
     * @hash   2010577167
     * @vftbl  1
     * @symbol  ?getPackSize\@ZipPackAccessStrategy\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getPackSize() const;
    /**
     * @hash   -836683235
     * @vftbl  2
     * @symbol  ?getPackLocation\@ZipPackAccessStrategy\@\@UEBAAEBVResourceLocation\@\@XZ
     */
    virtual class ResourceLocation const & getPackLocation() const;
    /**
     * @hash   -1242664031
     * @vftbl  3
     * @symbol  ?getPackName\@ZipPackAccessStrategy\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getPackName() const;
    /**
     * @hash   1621571745
     * @vftbl  4
     * @symbol  ?isWritable\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isWritable() const;
    /**
     * @hash   1328064091
     * @vftbl  5
     * @symbol  ?setIsTrusted\@ZipPackAccessStrategy\@\@UEAAX_N\@Z
     */
    virtual void setIsTrusted(bool);
    /**
     * @hash   59314532
     * @vftbl  6
     * @symbol  ?isTrusted\@ZipPackAccessStrategy\@\@UEBA_NXZ
     */
    virtual bool isTrusted() const;
    /**
     * @hash   -535193324
     * @vftbl  7
     * @symbol  ?hasAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@_N\@Z
     */
    virtual bool hasAsset(class Core::Path const &, bool) const;
    /**
     * @hash   1643686132
     * @vftbl  8
     * @symbol  ?hasFolder\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    virtual bool hasFolder(class Core::Path const &) const;
    /**
     * @hash   488741183
     * @vftbl  9
     * @symbol  ?getAsset\@ZipPackAccessStrategy\@\@UEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /**
     * @hash   97057715
     * @vftbl  10
     * @symbol  ?deleteAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /**
     * @hash   -1974327248
     * @vftbl  11
     * @symbol  ?writeAsset\@ZipPackAccessStrategy\@\@UEAA_NAEBVPath\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool writeAsset(class Core::Path const &, std::string const &);
    /**
     * @hash   302822943
     * @vftbl  12
     * @symbol  ?forEachIn\@ZipPackAccessStrategy\@\@UEBAXAEBVPath\@Core\@\@V?$function\@$$A6AXAEBVPath\@Core\@\@\@Z\@std\@\@_N\@Z
     */
    virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /**
     * @hash   1285321368
     * @vftbl  14
     * @symbol  ?getStrategyType\@ZipPackAccessStrategy\@\@UEBA?AW4PackAccessStrategyType\@\@XZ
     */
    virtual enum class PackAccessStrategyType getStrategyType() const;
    /**
     * @hash   -122312950
     * @vftbl  15
     * @symbol  ?getSubPath\@ZipPackAccessStrategy\@\@UEBAAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const & getSubPath() const;
    /**
     * @hash   -63246306
     * @vftbl  16
     * @symbol  ?createSubPack\@ZipPackAccessStrategy\@\@UEBA?AV?$unique_ptr\@VPackAccessStrategy\@\@U?$default_delete\@VPackAccessStrategy\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /**
     * @hash   2117500597
     * @vftbl  19
     * @symbol  ?unload\@ZipPackAccessStrategy\@\@UEAAXXZ
     */
    virtual void unload();
    /**
     * @hash   -126952704
     * @vftbl  21
     * @symbol  ?readContentIdentity\@ZipPackAccessStrategy\@\@UEBA?AVContentIdentity\@\@XZ
     */
    virtual class ContentIdentity readContentIdentity() const;
    /**
     * @hash   -2024825570
     * @symbol  ??0ZipPackAccessStrategy\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VIFileAccess\@\@\@Bedrock\@\@\@gsl\@\@AEBVResourceLocation\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI ZipPackAccessStrategy(class gsl::not_null<class Bedrock::NonOwnerPointer<class IFileAccess>> const &, class ResourceLocation const &, class Core::Path const &);

//private:
    /**
     * @hash   -1148547708
     * @symbol  ?_tryReadFromPendingQueue\@ZipPackAccessStrategy\@\@AEBA_NAEBVPath\@Core\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _tryReadFromPendingQueue(class Core::Path const &, std::string &) const;

private:

};
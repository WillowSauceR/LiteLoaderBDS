/**
 * @file  WorldHistoryPackSource.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldHistoryPackSource.
 *
 */
class WorldHistoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDHISTORYPACKSOURCE
public:
    class WorldHistoryPackSource& operator=(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource(class WorldHistoryPackSource const &) = delete;
    WorldHistoryPackSource() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~WorldHistoryPackSource();
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
     * @symbol ?getPackOrigin@WorldHistoryPackSource@@UEBA?AW4PackOrigin@@XZ
     */
    virtual enum PackOrigin getPackOrigin() const;
    /**
     * @vtable 4
     * @symbol ?getPackType@WorldHistoryPackSource@@UEBA?AW4PackType@@XZ
     */
    virtual enum PackType getPackType() const;
    /**
     * @vtable 5
     * @symbol ?load@WorldHistoryPackSource@@UEAA?AVPackSourceReport@@AEAVIPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@@Z
     */
    virtual class PackSourceReport load(class IPackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDHISTORYPACKSOURCE
    /**
     * @vtable -1
     * @symbol ?forEachPack@WorldHistoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z
     */
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    /**
     * @vtable -1
     * @symbol ?forEachPackConst@WorldHistoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z
     */
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    /**
     * @symbol ??0WorldHistoryPackSource@@QEAA@AEBVPath@Core@@W4PackType@@@Z
     */
    MCAPI WorldHistoryPackSource(class Core::Path const &, enum PackType);
    /**
     * @symbol ?getPathToWorld@WorldHistoryPackSource@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCAPI class Core::PathBuffer<std::string> const & getPathToWorld() const;
    /**
     * @symbol ?generateHistoryFilePath@WorldHistoryPackSource@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@W4PackType@@@Z
     */
    MCAPI static class Core::PathBuffer<std::string> generateHistoryFilePath(class Core::Path const &, enum PackType);

//private:
    /**
     * @symbol ?_addPackFromHistoryPack@WorldHistoryPackSource@@AEAAXAEBVWorldPackHistory@@@Z
     */
    MCAPI void _addPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @symbol ?_createPackFromHistoryPack@WorldHistoryPackSource@@AEAA?AV?$unique_ptr@VPack@@U?$default_delete@VPack@@@std@@@std@@AEBVWorldPackHistory@@@Z
     */
    MCAPI std::unique_ptr<class Pack> _createPackFromHistoryPack(class WorldPackHistory const &);
    /**
     * @symbol ?_readWorldHistoryFile@WorldHistoryPackSource@@AEAA_NXZ
     */
    MCAPI bool _readWorldHistoryFile();

private:

};
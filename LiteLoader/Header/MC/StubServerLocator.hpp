/**
 * @file  StubServerLocator.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StubServerLocator.
 *
 */
class StubServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STUBSERVERLOCATOR
public:
    class StubServerLocator& operator=(class StubServerLocator const &) = delete;
    StubServerLocator(class StubServerLocator const &) = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~StubServerLocator();
    /**
     * @vtable 1
     * @symbol ?setGetHostGUIDFn@StubServerLocator@@UEAAXAEBV?$function@$$A6A?AURakNetGUID@RakNet@@XZ@std@@@Z
     */
    virtual void setGetHostGUIDFn(class std::function<struct RakNet::RakNetGUID (void)> const &);
    /**
     * @vtable 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vtable 3
     * @symbol ?startAnnouncingServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4GameType@@HH_N2@Z
     */
    virtual void startAnnouncingServer(std::string const &, std::string const &, enum GameType, int, int, bool, bool);
    /**
     * @vtable 4
     * @symbol ?stopAnnouncingServer@StubServerLocator@@UEAAXXZ
     */
    virtual void stopAnnouncingServer();
    /**
     * @vtable 5
     * @symbol ?startServerDiscovery@StubServerLocator@@UEAAXUPortPair@@@Z
     */
    virtual void startServerDiscovery(struct PortPair);
    /**
     * @vtable 6
     * @symbol ?stopServerDiscovery@StubServerLocator@@UEAAXXZ
     */
    virtual void stopServerDiscovery();
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
     * @symbol ?getServerList@StubServerLocator@@UEBA?AV?$vector@UPingedCompatibleServer@@V?$allocator@UPingedCompatibleServer@@@std@@@std@@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const;
    /**
     * @vtable 10
     * @symbol ?clearServerList@StubServerLocator@@UEAAXXZ
     */
    virtual void clearServerList();
    /**
     * @vtable 11
     * @symbol ?update@StubServerLocator@@UEAAXXZ
     */
    virtual void update();
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
     * @symbol ?getPingTimeForGUID@StubServerLocator@@UEAAMAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual float getPingTimeForGUID(std::string const &);
    /**
     * @vtable 16
     * @symbol ?checkCanConnectToCustomServerAsync@StubServerLocator@@UEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HV?$function@$$A6AX_N@Z@3@@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void (bool)>);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STUBSERVERLOCATOR
    /**
     * @vtable -1
     * @symbol ?addCustomServer@StubServerLocator@@UEAAXAEBVAsynchronousIPResolver@@H@Z
     */
    MCVAPI void addCustomServer(class AsynchronousIPResolver const &, int);
    /**
     * @vtable -1
     * @symbol ?addCustomServer@StubServerLocator@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCVAPI void addCustomServer(std::string const &, int);
    /**
     * @vtable -1
     * @symbol ?isIPv4Supported@StubServerLocator@@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @vtable -1
     * @symbol ?isIPv6Supported@StubServerLocator@@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
#endif
    /**
     * @symbol ??0StubServerLocator@@QEAA@XZ
     */
    MCAPI StubServerLocator();

};
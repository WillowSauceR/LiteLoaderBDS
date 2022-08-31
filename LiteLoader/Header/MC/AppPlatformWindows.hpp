/**
 * @file  AppPlatformWindows.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatformWindows.
 *
 */
class AppPlatformWindows {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMWINDOWS
public:
    class AppPlatformWindows& operator=(class AppPlatformWindows const &) = delete;
    AppPlatformWindows(class AppPlatformWindows const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMWINDOWS
    /**
     * @vtable -1
     * @symbol ?_getCurrentStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getCurrentStoragePath() const;
    /**
     * @vtable -1
     * @symbol ?_getExternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getExternalStoragePath() const;
    /**
     * @vtable -1
     * @symbol ?_getInternalStoragePath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getInternalStoragePath() const;
    /**
     * @vtable -1
     * @symbol ?_getUserdataPath@AppPlatformWindows@@EEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> _getUserdataPath() const;
    /**
     * @vtable -1
     * @symbol ?allowContentLogWriteToDisk@AppPlatformWindows@@UEAA_NXZ
     */
    MCVAPI bool allowContentLogWriteToDisk();
    /**
     * @vtable -1
     * @symbol ?calculateAvailableDiskFreeSpace@AppPlatformWindows@@UEAA_KAEBVPath@Core@@@Z
     */
    MCVAPI unsigned __int64 calculateAvailableDiskFreeSpace(class Core::Path const &);
    /**
     * @vtable -1
     * @symbol ?canAppSelfTerminate@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool canAppSelfTerminate() const;
    /**
     * @vtable -1
     * @symbol ?copyImportFileToTempFolder@AppPlatformWindows@@UEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVPath@3@@Z
     */
    MCVAPI class Core::PathBuffer<std::string> copyImportFileToTempFolder(class Core::Path const &);
    /**
     * @vtable -1
     * @symbol ?getHighPerformanceThreadsCount@AppPlatformWindows@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getHighPerformanceThreadsCount() const;
    /**
     * @vtable -1
     * @symbol ?getMainThreadQueue@AppPlatformWindows@@UEAAAEAV?$MPMCQueue@V?$function@$$A6AXXZ@std@@@@XZ
     */
    MCVAPI class MPMCQueue<class std::function<void (void)>> & getMainThreadQueue();
    /**
     * @vtable -1
     * @symbol ?getPackagedShaderCachePath@AppPlatformWindows@@MEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPackagedShaderCachePath();
    /**
     * @vtable -1
     * @symbol ?getPlatformTTSEnabled@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSEnabled() const;
    /**
     * @vtable -1
     * @symbol ?getPlatformTTSExists@AppPlatformWindows@@UEBA_NXZ
     */
    MCVAPI bool getPlatformTTSExists() const;
    /**
     * @vtable -1
     * @symbol ?getPlatformTempPath@AppPlatformWindows@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    MCVAPI class Core::PathBuffer<std::string> getPlatformTempPath() const;
    /**
     * @vtable -1
     * @symbol ?getTotalHardwareThreadsCount@AppPlatformWindows@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTotalHardwareThreadsCount() const;
    /**
     * @vtable -1
     * @symbol ?queueForMainThread_DEPRECATED@AppPlatformWindows@@UEAAXV?$function@$$A6AXXZ@std@@@Z
     */
    MCVAPI void queueForMainThread_DEPRECATED(class std::function<void (void)>);
    /**
     * @vtable -1
     * @symbol ?registerExperimentsActiveCrashDump@AppPlatformWindows@@UEBAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCVAPI void registerExperimentsActiveCrashDump(std::vector<std::string> const &) const;
    /**
     * @vtable -1
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatformWindows();
#endif
    /**
     * @symbol ??0AppPlatformWindows@@QEAA@XZ
     */
    MCAPI AppPlatformWindows();
MCAPI static std::string const EXPERIMENTS_ACTIVE_KEY;

//protected:
    /**
     * @symbol ?_findHighPerformanceThreadsCount@AppPlatformWindows@@IEBA_KXZ
     */
    MCAPI unsigned __int64 _findHighPerformanceThreadsCount() const;

protected:

};
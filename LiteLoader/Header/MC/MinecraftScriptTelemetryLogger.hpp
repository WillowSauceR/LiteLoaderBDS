/**
 * @file  MinecraftScriptTelemetryLogger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftScriptTelemetryLogger.
 *
 */
class MinecraftScriptTelemetryLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCRIPTTELEMETRYLOGGER
public:
    class MinecraftScriptTelemetryLogger& operator=(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~MinecraftScriptTelemetryLogger();
    /**
     * @vtable 1
     * @symbol ?onPluginDiscovery@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@@Z
     */
    virtual void onPluginDiscovery(class ScriptPluginResult const &);
    /**
     * @vtable 2
     * @symbol ?onPluginRun@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@Z
     */
    virtual void onPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>);
    /**
     * @vtable 3
     * @symbol ?onDebuggerListen@MinecraftScriptTelemetryLogger@@UEAAXXZ
     */
    virtual void onDebuggerListen();
    /**
     * @vtable 4
     * @symbol ?onDebuggerConnect@MinecraftScriptTelemetryLogger@@UEAAXXZ
     */
    virtual void onDebuggerConnect();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECRAFTSCRIPTTELEMETRYLOGGER
#endif
    /**
     * @symbol ??0MinecraftScriptTelemetryLogger@@QEAA@AEAVIMinecraftEventing@@_N@Z
     */
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing &, bool);

};
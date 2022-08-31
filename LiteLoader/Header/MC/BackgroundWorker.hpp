/**
 * @file  BackgroundWorker.hpp
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
 * @brief MC class BackgroundWorker.
 *
 */
class BackgroundWorker {

#define AFTER_EXTRA
// Add Member There
public:
enum RunOneResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDWORKER
public:
    class BackgroundWorker& operator=(class BackgroundWorker const &) = delete;
    BackgroundWorker(class BackgroundWorker const &) = delete;
    BackgroundWorker() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BackgroundWorker();
    /**
     * @vtable 1
     * @symbol ?isAsync@BackgroundWorker@@UEBA_NXZ
     */
    virtual bool isAsync() const;
    /**
     * @vtable 2
     * @symbol ?canTaskRunAgain@BackgroundWorker@@UEBA_NXZ
     */
    virtual bool canTaskRunAgain() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDWORKER
#endif
    /**
     * @symbol ??0BackgroundWorker@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NAEBVOSThreadPriority@Threading@Bedrock@@V?$optional@_K@2@AEAVWorkerPool@@1@Z
     */
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const &, class std::optional<unsigned __int64>, class WorkerPool &, bool);
    /**
     * @symbol ?getApproximateTaskCount@BackgroundWorker@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    /**
     * @symbol ?getThreadId@BackgroundWorker@@QEBA?AVid@thread@std@@XZ
     */
    MCAPI class std::thread::id getThreadId() const;
    /**
     * @symbol ?isIdle@BackgroundWorker@@QEBA_NXZ
     */
    MCAPI bool isIdle() const;
    /**
     * @symbol ?processTaskSync@BackgroundWorker@@QEAA_NXZ
     */
    MCAPI bool processTaskSync();
    /**
     * @symbol ?queue@BackgroundWorker@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     */
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?requestStop@BackgroundWorker@@QEAAX_N@Z
     */
    MCAPI void requestStop(bool);
    /**
     * @symbol ?resetWorkerThreadID@BackgroundWorker@@QEAAXXZ
     */
    MCAPI void resetWorkerThreadID();
    /**
     * @symbol ?resortPriorityQueue@BackgroundWorker@@QEAAXXZ
     */
    MCAPI void resortPriorityQueue();
    /**
     * @symbol ?start@BackgroundWorker@@QEAAXXZ
     */
    MCAPI void start();
    /**
     * @symbol ?wake@BackgroundWorker@@QEAAXXZ
     */
    MCAPI void wake();
    /**
     * @symbol ?getLocal@BackgroundWorker@@SAPEAV1@XZ
     */
    MCAPI static class BackgroundWorker * getLocal();

//private:
    /**
     * @symbol ?_processNextTask@BackgroundWorker@@AEAA_NXZ
     */
    MCAPI bool _processNextTask();
    /**
     * @symbol ?_runOneTask@BackgroundWorker@@AEAA?AW4RunOneResult@1@XZ
     */
    MCAPI enum BackgroundWorker::RunOneResult _runOneTask();

private:
MCAPI static class BackgroundWorker * gLocalWorkerMappingSingleton;

};
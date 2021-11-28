// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BackgroundWorkerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BackgroundWorker {
#include "Extra/BackgroundWorkerAPI.hpp"
public:
    virtual ~BackgroundWorker();
    virtual void unk_vfn_1();
    virtual bool canTaskRunAgain();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();

public:
    MCAPI BackgroundWorker(std::string, bool, class Bedrock::Threading::OSThreadPriority const&, class std::optional<unsigned __int64>, class WorkerPool&, bool);
    MCAPI unsigned __int64 getApproximateTaskCount() const;
    MCAPI class std::thread::id getThreadId() const;
    MCAPI bool isIdle() const;
    MCAPI void queue(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI void requestStop(bool);
    MCAPI void resortPriorityQueue();
    MCAPI void start();
    MCAPI void wake();

    MCAPI static class BackgroundWorker* getLocal();

private:
    MCAPI bool _processNextTask();
    MCAPI enum BackgroundWorker::RunOneResult _runOneTask();

    MCAPI static class BackgroundWorker* gLocalWorkerMappingSingleton;
};
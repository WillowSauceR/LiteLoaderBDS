// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TaskQueueImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEIMPL
public:
    class TaskQueueImpl& operator=(class TaskQueueImpl const &) = delete;
    TaskQueueImpl(class TaskQueueImpl const &) = delete;
#endif

public:
    /*0*/ virtual unsigned int AddRef();
    /*3*/ virtual struct XTaskQueueObject * GetHandle();
    /*4*/ virtual long GetPortContext(enum XTaskQueuePort, struct ITaskQueuePortContext **);
    /*5*/ virtual long RegisterWaitHandle(enum XTaskQueuePort, void *, void *, void ( *)(void *, bool), struct XTaskQueueRegistrationToken *);
    /*6*/ virtual void UnregisterWaitHandle(struct XTaskQueueRegistrationToken);
    /*7*/ virtual long RegisterSubmitCallback(void *, void ( *)(void *, struct XTaskQueueObject *, enum XTaskQueuePort), struct XTaskQueueRegistrationToken *);
    /*8*/ virtual void UnregisterSubmitCallback(struct XTaskQueueRegistrationToken);
    /*9*/ virtual bool CanTerminate();
    /*10*/ virtual bool CanClose();
    /*11*/ virtual long Terminate(bool, void *, void ( *)(void *));
    /*12*/ virtual ~TaskQueueImpl();
    /*14*/ virtual void RundownObject();
    MCAPI long Initialize(struct XTaskQueuePortObject *, struct XTaskQueuePortObject *);
    MCAPI long Initialize(enum XTaskQueueDispatchMode, enum XTaskQueueDispatchMode, bool, bool);
    MCAPI TaskQueueImpl();

protected:

private:
    MCAPI static void OnTerminationCallback(void *);

};
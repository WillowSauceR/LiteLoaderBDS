// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"


#define BEFORE_EXTRA //DO NOT EDIT THIS LINE
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA //DO NOT EDIT THIS LINE

namespace ActorContainerDiffHelper {

#define AFTER_EXTRA //DO NOT EDIT THIS LINE
// Add Member There

#undef AFTER_EXTRA //DO NOT EDIT THIS LINE
    MCAPI void applyIfChanged(std::vector<class MobEffectInstance>&, std::vector<class MobEffectInstance> const&, std::vector<class MobEffectInstance> const&);
    MCAPI void applyIfChanged(class BaseAttributeMap&, class BaseAttributeMap const&, class BaseAttributeMap const&);
    MCAPI void applyIfChanged(class SynchedActorData&, class SynchedActorData const&, class SynchedActorData const&, class Actor*);
};
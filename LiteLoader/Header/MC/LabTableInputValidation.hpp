// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA //DO NOT EDIT THIS LINE
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA //DO NOT EDIT THIS LINE

class LabTableInputValidation : public ContainerValidationBase {

#define AFTER_EXTRA //DO NOT EDIT THIS LINE
// Add Member There

#undef AFTER_EXTRA //DO NOT EDIT THIS LINE

public:
    /*0*/ virtual ~LabTableInputValidation();
    /*1*/ virtual bool isValidSlotForContainer(class ContainerScreenContext const&, class Container const&, int) const;
    /*2*/ virtual bool isItemAllowedInSlot(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual void __unk_vfn_1();

    /*
    inline bool canDestroy(class ContainerScreenContext const& a0) const{
        bool (LabTableInputValidation::*rv)(class ContainerScreenContext const&) const;
        *((void**)&rv) = dlsym("?canDestroy@LabTableInputValidation@@UEBA_NAEBVContainerScreenContext@@@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0));
    }
    */


protected:


private:

};
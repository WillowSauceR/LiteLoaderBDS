// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA //DO NOT EDIT THIS LINE
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA //DO NOT EDIT THIS LINE

class PreviewContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA //DO NOT EDIT THIS LINE
// Add Member There

#undef AFTER_EXTRA //DO NOT EDIT THIS LINE

public:
    /*0*/ virtual ~PreviewContainerValidation();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();

    /*
    inline bool isValidSlotForContainer(class ContainerScreenContext const& a0, class Container const& a1, int a2) const{
        bool (PreviewContainerValidation::*rv)(class ContainerScreenContext const&, class Container const&, int) const;
        *((void**)&rv) = dlsym("?isValidSlotForContainer@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<class Container const&>(a1), std::forward<int>(a2));
    }
    inline bool isItemAllowedToAdd(class ItemStack const& a0) const{
        bool (PreviewContainerValidation::*rv)(class ItemStack const&) const;
        *((void**)&rv) = dlsym("?isItemAllowedToAdd@PreviewContainerValidation@@UEBA_NAEBVItemStack@@@Z");
        return (this->*rv)(std::forward<class ItemStack const&>(a0));
    }
    inline bool isItemAllowedInSlot(class ContainerScreenContext const& a0, int a1, class ItemStackBase const& a2, int a3) const{
        bool (PreviewContainerValidation::*rv)(class ContainerScreenContext const&, int, class ItemStackBase const&, int) const;
        *((void**)&rv) = dlsym("?isItemAllowedInSlot@PreviewContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z");
        return (this->*rv)(std::forward<class ContainerScreenContext const&>(a0), std::forward<int>(a1), std::forward<class ItemStackBase const&>(a2), std::forward<int>(a3));
    }
    */


protected:


private:

};
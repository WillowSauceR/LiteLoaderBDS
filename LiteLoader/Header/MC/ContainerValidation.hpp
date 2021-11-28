// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ContainerValidationAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ContainerValidation {
#include "Extra/ContainerValidationAPI.hpp"

public:
    MCAPI static void assignValidationDelegates(class SparseContainer&, enum ContainerEnumName, class ContainerScreenContext const&);

private:
    MCAPI static void assignValidForSlotContainerDelegate(class SparseContainer&, enum ContainerEnumName, class ContainerScreenContext const&);
};
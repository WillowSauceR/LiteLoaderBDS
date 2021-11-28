// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SaveTransactionManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SaveTransactionManager {
#include "Extra/SaveTransactionManagerAPI.hpp"

public:
    MCAPI SaveTransactionManager(class WorkerPool&, class Scheduler&, class std::function<void(bool)>);
    MCAPI void onBeginCompaction();
    MCAPI void onEndCompaction();
    MCAPI ~SaveTransactionManager();


private:
    MCAPI void _hideGlobalSaveIcon();
    MCAPI void _showGlobalSaveIcon();
};
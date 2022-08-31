/**
 * @file  ContentLogEndPoint.hpp
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
 * @brief MC class ContentLogEndPoint.
 *
 */
class ContentLogEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGENDPOINT
public:
    class ContentLogEndPoint& operator=(class ContentLogEndPoint const &) = delete;
    ContentLogEndPoint(class ContentLogEndPoint const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGENDPOINT
    /**
     * @vtable -1
     * @symbol ?log@ContentLogEndPoint@@UEAAXPEBD@Z
     */
    MCVAPI void log(char const *);
    /**
     * @vtable -1
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContentLogEndPoint();
#endif
    /**
     * @symbol ??0ContentLogEndPoint@@QEAA@XZ
     */
    MCAPI ContentLogEndPoint();

};
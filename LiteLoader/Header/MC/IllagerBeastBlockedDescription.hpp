/**
 * @file  IllagerBeastBlockedDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IllagerBeastBlockedDescription.
 *
 */
class IllagerBeastBlockedDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILLAGERBEASTBLOCKEDDESCRIPTION
public:
    class IllagerBeastBlockedDescription& operator=(class IllagerBeastBlockedDescription const &) = delete;
    IllagerBeastBlockedDescription(class IllagerBeastBlockedDescription const &) = delete;
    IllagerBeastBlockedDescription() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol ?getJsonName@IllagerBeastBlockedDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vtable 1
     * @symbol __unk_destructor_1
     */
    virtual ~IllagerBeastBlockedDescription();
    /**
     * @vtable 2
     * @symbol ?deserializeData@IllagerBeastBlockedDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vtable 3
     * @symbol ?serializeData@IllagerBeastBlockedDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILLAGERBEASTBLOCKEDDESCRIPTION
#endif

};
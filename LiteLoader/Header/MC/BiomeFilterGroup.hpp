/**
 * @file  BiomeFilterGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterGroup.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeFilterGroup.
 *
 */
class BiomeFilterGroup : public FilterGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEFILTERGROUP
public:
    class BiomeFilterGroup& operator=(class BiomeFilterGroup const &) = delete;
    BiomeFilterGroup() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~BiomeFilterGroup();
    /**
     * @vtable 1
     * @symbol ?_createSubgroup@BiomeFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum FilterGroup::CollectionType) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEFILTERGROUP
#endif
    /**
     * @symbol ??0BiomeFilterGroup@@QEAA@AEBV0@@Z
     */
    MCAPI BiomeFilterGroup(class BiomeFilterGroup const &);
    /**
     * @symbol ?finalizeParsedValue@BiomeFilterGroup@@QEAAXAEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider &);

};
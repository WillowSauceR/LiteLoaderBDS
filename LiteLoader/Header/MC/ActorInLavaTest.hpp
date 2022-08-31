/**
 * @file  ActorInLavaTest.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorInLavaTest.
 *
 */
class ActorInLavaTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINLAVATEST
public:
    class ActorInLavaTest& operator=(class ActorInLavaTest const &) = delete;
    ActorInLavaTest(class ActorInLavaTest const &) = delete;
    ActorInLavaTest() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorInLavaTest();
    /**
     * @vtable 2
     * @symbol ?evaluate@ActorInLavaTest@@UEBA_NAEBUFilterContext@@@Z
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vtable 4
     * @symbol ?getName@ActorInLavaTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORINLAVATEST
#endif

};
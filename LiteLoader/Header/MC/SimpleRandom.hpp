/**
 * @file  SimpleRandom.hpp
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
 * @brief MC class SimpleRandom.
 *
 */
class SimpleRandom {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLERANDOM
public:
    class SimpleRandom& operator=(class SimpleRandom const &) = delete;
    SimpleRandom(class SimpleRandom const &) = delete;
    SimpleRandom() = delete;
#endif

public:
    /**
     * @vtable 0
     * @symbol __unk_destructor_0
     */
    virtual ~SimpleRandom();
    /**
     * @vtable 1
     * @symbol ?nextInt@SimpleRandom@@UEAAHXZ
     */
    virtual int nextInt();
    /**
     * @vtable 2
     * @symbol ?nextInt@SimpleRandom@@UEAAHH@Z
     */
    virtual int nextInt(int);
    /**
     * @vtable 3
     * @symbol ?nextLong@SimpleRandom@@UEAA_JXZ
     */
    virtual __int64 nextLong();
    /**
     * @vtable 4
     * @symbol ?nextBoolean@SimpleRandom@@UEAA_NXZ
     */
    virtual bool nextBoolean();
    /**
     * @vtable 5
     * @symbol ?nextFloat@SimpleRandom@@UEAAMXZ
     */
    virtual float nextFloat();
    /**
     * @vtable 6
     * @symbol ?nextDouble@SimpleRandom@@UEAANXZ
     */
    virtual double nextDouble();
    /**
     * @vtable 7
     * @symbol ?nextGaussianDouble@SimpleRandom@@UEAANXZ
     */
    virtual double nextGaussianDouble();
    /**
     * @vtable 8
     * @symbol ?consumeCount@SimpleRandom@@UEAAXI@Z
     */
    virtual void consumeCount(unsigned int);
    /**
     * @vtable 9
     * @symbol ?fork@SimpleRandom@@UEAA?AV?$unique_ptr@VIRandom@@U?$default_delete@VIRandom@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class IRandom> fork();
    /**
     * @vtable 10
     * @symbol ?forkPositional@SimpleRandom@@UEAA?AV?$unique_ptr@VIPositionalRandomFactory@@U?$default_delete@VIPositionalRandomFactory@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class IPositionalRandomFactory> forkPositional();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLERANDOM
#endif

};
/**
 * @file  BaseContainerMenu.hpp
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
 * @brief MC class BaseContainerMenu.
 *
 */
class BaseContainerMenu {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASECONTAINERMENU
public:
    class BaseContainerMenu& operator=(class BaseContainerMenu const &) = delete;
    BaseContainerMenu(class BaseContainerMenu const &) = delete;
    BaseContainerMenu() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASECONTAINERMENU
    /**
     * @vtable -1
     * @symbol ?broadcastChanges@BaseContainerMenu@@UEAAXXZ
     */
    MCVAPI void broadcastChanges();
    /**
     * @vtable -1
     * @symbol ?containerContentChanged@BaseContainerMenu@@UEAAXH@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @vtable -1
     * @symbol ?getContainerId@BaseContainerMenu@@UEBA?AW4ContainerID@@XZ
     */
    MCVAPI enum ContainerID getContainerId() const;
    /**
     * @vtable -1
     * @symbol ?getContainerType@BaseContainerMenu@@UEBA?AW4ContainerType@@XZ
     */
    MCVAPI enum ContainerType getContainerType() const;
    /**
     * @vtable -1
     * @symbol ?isResultSlot@BaseContainerMenu@@UEAA_NH@Z
     */
    MCVAPI bool isResultSlot(int);
    /**
     * @vtable -1
     * @symbol ?isSlotDirty@BaseContainerMenu@@UEAA_NH@Z
     */
    MCVAPI bool isSlotDirty(int);
    /**
     * @vtable -1
     * @symbol ?setContainerId@BaseContainerMenu@@UEAAXW4ContainerID@@@Z
     */
    MCVAPI void setContainerId(enum ContainerID);
    /**
     * @vtable -1
     * @symbol ?setContainerType@BaseContainerMenu@@UEAAXW4ContainerType@@@Z
     */
    MCVAPI void setContainerType(enum ContainerType);
    /**
     * @vtable -1
     * @symbol ?setData@BaseContainerMenu@@UEAAXHH@Z
     */
    MCVAPI void setData(int, int);
    /**
     * @vtable -1
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseContainerMenu();
#endif
    /**
     * @symbol ??0BaseContainerMenu@@QEAA@AEAVPlayer@@W4ContainerType@@@Z
     */
    MCAPI BaseContainerMenu(class Player &, enum ContainerType);

//protected:
    /**
     * @symbol ?_saveLastSlots@BaseContainerMenu@@IEAAXPEAVContainer@@@Z
     */
    MCAPI void _saveLastSlots(class Container *);

protected:

};
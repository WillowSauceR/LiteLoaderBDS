/**
 * @file  FileSecureStorage.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FileSecureStorage.
 *
 */
class FileSecureStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILESECURESTORAGE
public:
    class FileSecureStorage& operator=(class FileSecureStorage const &) = delete;
    FileSecureStorage(class FileSecureStorage const &) = delete;
    FileSecureStorage() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   939584182
     */
    virtual ~FileSecureStorage();
    /**
     * @vftbl  1
     * @symbol ?add@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1682475506
     */
    virtual bool add(std::string const &, std::string const &);
    /**
     * @vftbl  2
     * @symbol ?addOrUpdate@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1239077086
     */
    virtual bool addOrUpdate(std::string const &, std::string const &);
    /**
     * @vftbl  3
     * @symbol ?remove@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1016358055
     */
    virtual bool remove(std::string const &);
    /**
     * @vftbl  4
     * @symbol ?get@FileSecureStorage@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV23@@Z
     * @hash   1807548378
     */
    virtual bool get(std::string const &, std::string &);
    /**
     * @symbol ??0FileSecureStorage@@QEAA@AEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@PEAVISecureStorageKeySystem@@AEBVPath@2@PEAVStorageSystem@0@@Z
     * @hash   -780967116
     */
    MCAPI FileSecureStorage(class Core::PathBuffer<std::string> const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class ISecureStorageKeySystem *, class Core::Path const &, class FileSecureStorage::StorageSystem *);

//protected:
    /**
     * @symbol ?_init@FileSecureStorage@@IEAA_N_N@Z
     * @hash   1480352208
     */
    MCAPI bool _init(bool);

//private:
    /**
     * @symbol ?_contentKeyObfuscator@FileSecureStorage@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     * @hash   -576911731
     */
    MCAPI std::string _contentKeyObfuscator(std::string const &, std::string const &);
    /**
     * @symbol ?_getSecureStorageKey@FileSecureStorage@@AEBA?AVSecureStorageKey@@XZ
     * @hash   786264467
     */
    MCAPI class SecureStorageKey _getSecureStorageKey() const;
    /**
     * @symbol ?_initalizeSymmetricEncyrption@FileSecureStorage@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1330676905
     */
    MCAPI void _initalizeSymmetricEncyrption(std::string &, bool);
    /**
     * @symbol ?_rebuildSecureStorageFile@FileSecureStorage@@AEAAXXZ
     * @hash   1959519784
     */
    MCAPI void _rebuildSecureStorageFile();

protected:

private:

};
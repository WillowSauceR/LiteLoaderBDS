// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcI18nObserver {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCI18NOBSERVER
public:
    class NpcI18nObserver& operator=(class NpcI18nObserver const &) = delete;
    NpcI18nObserver(class NpcI18nObserver const &) = delete;
    NpcI18nObserver() = delete;
#endif

public:
    /*
    inline void onLanguageChanged(std::string const & a0, bool a1){
        void (NpcI18nObserver::*rv)(std::string const &, bool);
        *((void**)&rv) = dlsym("?onLanguageChanged@NpcI18nObserver@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
        return (this->*rv)(std::forward<std::string const &>(a0), std::forward<bool>(a1));
    }
    inline void onLanguagesLoaded(){
        void (NpcI18nObserver::*rv)();
        *((void**)&rv) = dlsym("?onLanguagesLoaded@NpcI18nObserver@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onLanguageKeywordsLoadedFromPack(class PackManifest const & a0){
        void (NpcI18nObserver::*rv)(class PackManifest const &);
        *((void**)&rv) = dlsym("?onLanguageKeywordsLoadedFromPack@NpcI18nObserver@@UEAAXAEBVPackManifest@@@Z");
        return (this->*rv)(std::forward<class PackManifest const &>(a0));
    }
    */

protected:

private:
    MCAPI void _loadNpcData();

};
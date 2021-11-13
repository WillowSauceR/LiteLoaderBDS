// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class Enchant {
public:
    virtual ~Enchant();
    virtual bool isCompatibleWith(int /*enum Enchant::Type*/);
    virtual int getMinCost(int);
    virtual int getMaxCost(int);
    virtual void unk_vfn_4();
    virtual int getMaxLevel();
    virtual int getDamageProtection(int, class ActorDamageSource const&);
    virtual float getDamageBonus(int, class Actor const&);
    virtual void doPostAttack(class Actor&, class Actor&, int);
    virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int);
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual bool _isValidEnchantmentTypeForCategory(int /*enum Enchant::Type*/);

public:
    MCAPI std::string getDescriptionId() const;
    MCAPI class HashedString const& getStringId() const;
    MCAPI bool isAvailable() const;
    MCAPI bool isDisabled() const;

    MCAPI static void initEnchants();
    MCAPI static std::vector<std::unique_ptr<class Enchant>> mEnchants;
    MCAPI static void shutdownEnchants();
};
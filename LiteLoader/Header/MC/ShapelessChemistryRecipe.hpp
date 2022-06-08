// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShapelessChemistryRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSCHEMISTRYRECIPE
public:
    class ShapelessChemistryRecipe& operator=(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe() = delete;
#endif

public:
    /*0*/ virtual ~ShapelessChemistryRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*5*/ virtual bool isShapeless() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*8*/ virtual class mce::UUID const & getId() const;
    /*9*/ virtual class ItemPack const & getItemPack() const;
    /*10*/ virtual bool isMultiRecipe() const;
    /*15*/ virtual void loadResultList(class BlockPalette const &) const;
    MCAPI static class mce::UUID const ID;

protected:

private:

};
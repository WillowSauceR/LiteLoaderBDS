// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockCollisionComponentProcessorAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BlockCollisionComponentProcessor {
#include "Extra/BlockCollisionComponentProcessorAPI.hpp"

public:
MCAPI static void _tryBake(struct BlockRotationComponent const*, struct BlockCollisionComponent*);
MCAPI static std::unique_ptr<class Util::EntityComponentProcessor> getProcessor();


} // namespace BlockCollisionComponentProcessor
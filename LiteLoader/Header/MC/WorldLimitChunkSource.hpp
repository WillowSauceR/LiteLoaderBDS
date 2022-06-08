// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ChunkSource.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WorldLimitChunkSource : public ChunkSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDLIMITCHUNKSOURCE
public:
    class WorldLimitChunkSource& operator=(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource(class WorldLimitChunkSource const &) = delete;
    WorldLimitChunkSource() = delete;
#endif

public:
    /*0*/ virtual ~WorldLimitChunkSource();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const &);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random &);
    /*6*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const &, enum ChunkSource::LoadMode, bool);
    /*8*/ virtual bool postProcess(class ChunkViewSource &);
    /*9*/ virtual void __unk_vfn_9();
    /*21*/ virtual bool isWithinWorldLimit(class ChunkPos const &) const;
    /*22*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const * getChunkMap();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual bool canCreateViews() const;
    MCAPI WorldLimitChunkSource(std::unique_ptr<class ChunkSource>, class BlockPos const &, int, int);

protected:

private:

};
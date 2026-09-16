#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources::Build {
class PriFileBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileBuilder@Build@Resources@Microsoft@@SAJQEBVIHierarchicalSchema@34@PEAVCoreProfile@34@W4PriBuildType@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const * const, WindissectOpaque *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileBuilder@Build@Resources@Microsoft@@SAJPEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@PriFileBuilder@Build@Resources@Microsoft@@SAJPEBGGPEAVCoreProfile@34@PEAPEAV1234@@Z
    static long CreateInstance(unsigned short const *, unsigned short, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyFileNotEmpty@PriFileBuilder@Build@Resources@Microsoft@@SAJPEBG@Z
    static long VerifyFileNotEmpty(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyFilePath@PriFileBuilder@Build@Resources@Microsoft@@SAJPEBG@Z
    static long VerifyFilePath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPriFileNotEmpty@PriFileBuilder@Build@Resources@Microsoft@@SAJPEBG@Z
    static long VerifyPriFileNotEmpty(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyPriFilePath@PriFileBuilder@Build@Resources@Microsoft@@SAJPEBG@Z
    static long VerifyPriFilePath(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PriFileBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~PriFileBuilder();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileMagic@PriFileBuilder@Build@Resources@Microsoft@@CAJPEAVCoreProfile@34@PEAT_DEFFILE_MAGIC@@@Z
    static long GetFileMagic(WindissectOpaque *, _DEFFILE_MAGIC *);
};
} // namespace Microsoft::Resources::Build

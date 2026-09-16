#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 16 member(s).
namespace Microsoft::Resources {
class BaseFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BaseFile@Resources@Microsoft@@SAJIPEBGPEAPEAV123@@Z
    static long CreateInstance(unsigned int, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@BaseFile@Resources@Microsoft@@SAJIPEBE_KPEAPEAV123@@Z
    static long CreateInstance(unsigned int, unsigned char const *, uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSection@BaseFile@Resources@Microsoft@@UEBAJFPEAVBaseFileSectionResult@23@@Z
    virtual long GetFileSection(short, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileSectionResultObject@BaseFile@Resources@Microsoft@@UEBAJPEAPEAVBaseFileSectionResult@23@@Z
    virtual long GetFileSectionResultObject(WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSectionIndex@BaseFile@Resources@Microsoft@@QEBAFT_DEFFILE_SECTION_TYPEID@@@Z
    short GetFirstSectionIndex(_DEFFILE_SECTION_TYPEID) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSectionTrailer@BaseFile@Resources@Microsoft@@SAPEAU_DEFFILE_SECTION_TRAILER@@PEBU_DEFFILE_SECTION_HEADER@@@Z
    static _DEFFILE_SECTION_TRAILER * GetSectionTrailer(_DEFFILE_SECTION_HEADER const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFileData@BaseFile@Resources@Microsoft@@SAJPEBGPEA_KPEAPEAX@Z
    static long LoadFileData(unsigned short const *, uint64_t *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapFileData@BaseFile@Resources@Microsoft@@SAJPEBGPEA_KPEAPEBX@Z
    static long MapFileData(unsigned short const *, uint64_t *, void const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateStructure@BaseFile@Resources@Microsoft@@SAJPEBX_K@Z
    static long ValidateStructure(void const *, uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseFile@Resources@Microsoft@@UEAA@XZ
    virtual ~BaseFile();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseFile@Resources@Microsoft@@IEAA@XZ
    BaseFile();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@BaseFile@Resources@Microsoft@@IEAAJIPEBG@Z
    long Init(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitFromData@BaseFile@Resources@Microsoft@@IEAAJPEBX_K@Z
    long InitFromData(void const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapFileData@BaseFile@Resources@Microsoft@@IEAAJXZ
    long UnmapFileData();
};
} // namespace Microsoft::Resources

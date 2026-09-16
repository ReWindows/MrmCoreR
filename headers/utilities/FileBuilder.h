#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 15 member(s).
namespace Microsoft::Resources::Build {
class FileBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSection@FileBuilder@Build@Resources@Microsoft@@QEAAJPEAVISectionBuilder@234@@Z
    long AddSection(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalizeAllSections@FileBuilder@Build@Resources@Microsoft@@UEAAJXZ
    virtual long FinalizeAllSections();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFileContents@FileBuilder@Build@Resources@Microsoft@@QEAAJPEAXIPEAI@Z
    long GenerateFileContents(void *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSize@FileBuilder@Build@Resources@Microsoft@@UEAAJPEAI@Z
    virtual long GetMaxSize(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteToFile@FileBuilder@Build@Resources@Microsoft@@QEAAJPEBG@Z
    long WriteToFile(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FileBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~FileBuilder();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FileBuilder@Build@Resources@Microsoft@@IEAA@T_DEFFILE_MAGIC@@@Z
    FileBuilder(_DEFFILE_MAGIC);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAllSections@FileBuilder@Build@Resources@Microsoft@@EEAAJXZ
    virtual long BuildAllSections();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishGenerating@FileBuilder@Build@Resources@Microsoft@@EEAAJXZ
    virtual long FinishGenerating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishSection@FileBuilder@Build@Resources@Microsoft@@EEAAJFI@Z
    virtual long FinishSection(short, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFileContentsInternal@FileBuilder@Build@Resources@Microsoft@@EEAAJXZ
    virtual long GenerateFileContentsInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGenerating@FileBuilder@Build@Resources@Microsoft@@EEAAJPEAXI@Z
    virtual long StartGenerating(void *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSection@FileBuilder@Build@Resources@Microsoft@@EEAAJFPEAPEAU_SectionInfo@1234@@Z
    virtual long StartSection(short, WindissectOpaque * *);
};
} // namespace Microsoft::Resources::Build

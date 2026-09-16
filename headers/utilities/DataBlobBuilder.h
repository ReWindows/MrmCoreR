#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources::Build {
class DataBlobBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@DataBlobBuilder@Build@Resources@Microsoft@@UEAAJPEBEIPEAI@Z
    virtual long AddData(unsigned char const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataAsReference@DataBlobBuilder@Build@Resources@Microsoft@@UEAAJPEBEIPEAI@Z
    virtual long AddDataAsReference(unsigned char const *, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildDataBlob@DataBlobBuilder@Build@Resources@Microsoft@@UEBAJPEAXIPEAI@Z
    virtual long BuildDataBlob(void *, unsigned int, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataBlobBuilder@Build@Resources@Microsoft@@SAJPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentDataSize@DataBlobBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetCurrentDataSize() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxSizeInBytesOfDataBlob@DataBlobBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetMaxSizeInBytesOfDataBlob() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataBlobBuilder@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DataBlobBuilder();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataBlobBuilder@Build@Resources@Microsoft@@IEAA@XZ
    DataBlobBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DataBlobBuilder@Build@Resources@Microsoft@@IEAAJXZ
    long Init();
};
} // namespace Microsoft::Resources::Build

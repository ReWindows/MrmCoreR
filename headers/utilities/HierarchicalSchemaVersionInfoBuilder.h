#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace Microsoft::Resources::Build {
class HierarchicalSchemaVersionInfoBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@HierarchicalSchemaVersionInfoBuilder@0Resources@Microsoft@@QEBAJPEAX_KPEAI@Z
    long Build(void *, uint64_t, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@SAJPEBVIHierarchicalSchema@34@HHPEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque const *, int, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionChecksum@HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetVersionChecksum() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaVersionInfoBuilder@Build@Resources@Microsoft@@IEAA@PEBVIHierarchicalSchema@23@GG@Z
    HierarchicalSchemaVersionInfoBuilder(WindissectOpaque const *, unsigned short, unsigned short);
};
} // namespace Microsoft::Resources::Build

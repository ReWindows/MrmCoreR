#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Microsoft::Resources {
class HierarchicalSchemaVersionInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaVersionInfo@Resources@Microsoft@@SAJPEBU_MRMFILE_HSCHEMA_VERSION_INFO@@PEAPEAV123@@Z
    static long CreateInstance(_MRMFILE_HSCHEMA_VERSION_INFO const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@HierarchicalSchemaVersionInfo@Resources@Microsoft@@SAJPEBX_KPEAPEAV123@@Z
    static long CreateInstance(void const *, uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorVersion@HierarchicalSchemaVersionInfo@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMajorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinorVersion@HierarchicalSchemaVersionInfo@Resources@Microsoft@@UEBAGXZ
    virtual unsigned short GetMinorVersion() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumItems@HierarchicalSchemaVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumItems() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumScopes@HierarchicalSchemaVersionInfo@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumScopes() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVersionChecksum@HierarchicalSchemaVersionInfo@Resources@Microsoft@@UEBAIXZ
    virtual unsigned int GetVersionChecksum() const;
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaVersionInfo@Resources@Microsoft@@IEAA@PEBU_MRMFILE_HSCHEMA_VERSION_INFO@@@Z
    HierarchicalSchemaVersionInfo(_MRMFILE_HSCHEMA_VERSION_INFO const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HierarchicalSchemaVersionInfo@Resources@Microsoft@@IEAA@XZ
    HierarchicalSchemaVersionInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@HierarchicalSchemaVersionInfo@Resources@Microsoft@@IEAAJPEBX_K@Z
    long Init(void const *, uint64_t);
};
} // namespace Microsoft::Resources

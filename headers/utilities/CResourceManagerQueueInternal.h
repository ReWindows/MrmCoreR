#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 11 member(s).
namespace Microsoft::Resources::Runtime {
class CResourceManagerQueueInternal {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalReferenceBlobForManifestFile@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBG00_KPEAEPEA_K@Z
    long GetInternalReferenceBlobForManifestFile(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, unsigned char *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInternalReferenceBlobForManifestString@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBG00_KPEAEPEA_K@Z
    long GetInternalReferenceBlobForManifestString(unsigned short const *, unsigned short const *, unsigned short const *, uint64_t, unsigned char *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMrtCachePathForPackage@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEAG_K@Z
    long GetMrtCachePathForPackage(unsigned short const *, unsigned short *, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBG00PEAG_KPEA_K@Z
    long GetString(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short *, uint64_t, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullyQualifiedResourceReference@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBG@Z
    long IsFullyQualifiedResourceReference(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResourceReference@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAJPEBGPEAVStringResult@34@@Z
    long IsResourceReference(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAAXI@Z
    void Reset(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@QEAA@XZ
    ~CResourceManagerQueueInternal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEscapedPriPathFromPackageFullName@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@AEAAJPEBG0W4FULLY_QUALIFIED_REFERENCE_TYPE@234@PEAPEAG2PEAPEAVMrmProfile@34@PEAW4ProfileType@634@@Z
    long GetEscapedPriPathFromPackageFullName(unsigned short const *, unsigned short const *, int, unsigned short * *, unsigned short * *, WindissectOpaque * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringInternal@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@AEAAJPEBG00_NPEAG_KPEA_K@Z
    long GetStringInternal(unsigned short const *, unsigned short const *, unsigned short const *, bool, unsigned short *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Pop@CResourceManagerQueueInternal@Runtime@Resources@Microsoft@@AEAAXXZ
    void _Pop();
};
} // namespace Microsoft::Resources::Runtime

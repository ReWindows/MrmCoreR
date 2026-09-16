#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
namespace Microsoft::Resources {
class WindowsClientProfileBaseHelpers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesFileExist@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAA_NPEBG@Z
    virtual bool DoesFileExist(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesFileExist@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAAJPEBGPEA_N@Z
    virtual long DoesFileExist(unsigned short const *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageRootFromPackageName@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAAJPEBGPEAVStringResult@23@@Z
    virtual long GetPackageRootFromPackageName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemPackage@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAA_NPEBG@Z
    virtual bool IsSystemPackage(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadRegistryStringFromPackage@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAAJPEBG00PEAVStringResult@23@@Z
    virtual long ReadRegistryStringFromPackage(unsigned short const *, unsigned short const *, unsigned short const *, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowsClientProfileBaseHelpers@Resources@Microsoft@@QEAA@XZ
    WindowsClientProfileBaseHelpers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteRegistryStringToPackage@WindowsClientProfileBaseHelpers@Resources@Microsoft@@UEAAJPEBG000@Z
    virtual long WriteRegistryStringToPackage(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsClientProfileBaseHelpers@Resources@Microsoft@@QEAA@XZ
    ~WindowsClientProfileBaseHelpers();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenRegKeyForPackageName@WindowsClientProfileBaseHelpers@Resources@Microsoft@@AEAAJPEBG0KPEAPEAUHKEY__@@@Z
    long OpenRegKeyForPackageName(unsigned short const *, unsigned short const *, unsigned long, HKEY__* *);
};
} // namespace Microsoft::Resources

#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 9 member(s).
class CResourceValidator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceValidator@@QEAA@XZ
    CResourceValidator();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption@CResourceValidator@@UEAAJW4VALIDATE_OPTIONS@@@Z
    virtual long SetOption(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNamedResource@CResourceValidator@@UEAAJPEAUINamedResource@@@Z
    virtual long ValidateNamedResource(INamedResource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidatePriFile@CResourceValidator@@UEAAJPEBG@Z
    virtual long ValidatePriFile(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateResourceMap@CResourceValidator@@UEAAJPEAUIResourceMap@@@Z
    virtual long ValidateResourceMap(IResourceMap *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceValidator@@MEAA@XZ
    virtual ~CResourceValidator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CResourceValidator@@AEAAJXZ
    long _Init();
};

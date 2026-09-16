#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 20 member(s).
class CResourceCandidate {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResourceCandidate@@QEAA@XZ
    CResourceCandidate();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrigin@CResourceCandidate@@UEAAJPEAPEAG@Z
    virtual long GetOrigin(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifier@CResourceCandidate@@UEAAJIPEAURESOURCE_QUALIFIER@@@Z
    virtual long GetQualifier(unsigned int, RESOURCE_QUALIFIER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierCount@CResourceCandidate@@UEAAJPEAI@Z
    virtual long GetQualifierCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQualifierValue@CResourceCandidate@@UEAAJPEBGPEAPEAG@Z
    virtual long GetQualifierValue(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuery@CResourceCandidate@@UEAAJPEAPEAG@Z
    virtual long GetQuery(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CResourceCandidate@@UEAAJPEAPEAG@Z
    virtual long GetType(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefault@CResourceCandidate@@UEAAJPEAH@Z
    virtual long IsDefault(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatch@CResourceCandidate@@UEAAJPEAH@Z
    virtual long IsMatch(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMatchAsDefault@CResourceCandidate@@UEAAJPEAH@Z
    virtual long IsMatchAsDefault(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CResourceCandidate@@QEAAJPEAVCResolvedInstanceInternal@Runtime@Resources@Microsoft@@_N@Z
    long RuntimeClassInitialize(WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToFilePath@CResourceCandidate@@UEAAJPEAPEAG@Z
    virtual long ToFilePath(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToStream@CResourceCandidate@@UEAAJPEAPEAUIStream@@@Z
    virtual long ToStream(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToString@CResourceCandidate@@UEAAJPEAPEAG@Z
    virtual long ToString(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoAllocString@CResourceCandidate@@SAJPEBGPEAPEAG@Z
    static long _CoAllocString(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateStream@CResourceCandidate@@SAJPEAVCResolvedInstanceInternal@Runtime@Resources@Microsoft@@PEAPEAUIStream@@@Z
    static long _CreateStream(WindissectOpaque *, IStream * *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResourceCandidate@@MEAA@XZ
    virtual ~CResourceCandidate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToValueStringByType@CResourceCandidate@@CAJPEAVCResolvedInstanceInternal@Runtime@Resources@Microsoft@@HPEAPEAG@Z
    static long _ToValueStringByType(WindissectOpaque *, int, unsigned short * *);
};

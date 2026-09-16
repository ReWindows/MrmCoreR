#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Microsoft::Resources {
class StringIdentifierQualifierType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@StringIdentifierQualifierType@Resources@Microsoft@@SAJ_KW4_QualifierTypeFlags@QualifierTypeBase@23@PEAPEAV123@@Z
    static long CreateInstance(uint64_t, int, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidStringIdentifier@StringIdentifierQualifierType@Resources@Microsoft@@SA_NPEBG_K@Z
    static bool IsValidStringIdentifier(unsigned short const *, uint64_t);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StringIdentifierQualifierType@Resources@Microsoft@@IEAA@_KW4_QualifierTypeFlags@QualifierTypeBase@12@@Z
    StringIdentifierQualifierType(uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateSingleQualifierValue@StringIdentifierQualifierType@Resources@Microsoft@@MEBAJPEBG@Z
    virtual long ValidateSingleQualifierValue(unsigned short const *) const;
};
} // namespace Microsoft::Resources

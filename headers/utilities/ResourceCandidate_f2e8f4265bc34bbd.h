#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 8 member(s).
namespace winrt::Microsoft::Windows::ApplicationModel::Resources::implementation {
class ResourceCandidate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QualifierValues@ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AU?$IMapView@Uhstring@winrt@@U12@@Collections@Foundation@57@XZ
    WindissectOpaque QualifierValues();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA@AEBU0Core@2346@U?$array_view@$$CBE@6@@Z
    ResourceCandidate(WindissectOpaque const &, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA@AEBU0Core@2346@W4ResourceCandidateKind@23456@Uhstring@6@@Z
    ResourceCandidate(WindissectOpaque const &, int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAsBytes@ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AU?$com_array@E@7@XZ
    WindissectOpaque ValueAsBytes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValueAsString@ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AUhstring@7@XZ
    WindissectOpaque ValueAsString();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceCandidate@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@UEAA@XZ
    virtual ~ResourceCandidate();
};
} // namespace winrt::Microsoft::Windows::ApplicationModel::Resources::implementation

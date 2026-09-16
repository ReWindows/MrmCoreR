#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace winrt::Microsoft::Windows::ApplicationModel::Resources::implementation {
class ResourceMap {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubtree@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AU134567@AEBUhstring@7@@Z
    WindissectOpaque GetSubtree(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AUResourceCandidate@34567@AEBUhstring@7@@Z
    WindissectOpaque GetValue(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AUResourceCandidate@34567@AEBUhstring@7@AEBUResourceContext@34567@@Z
    WindissectOpaque GetValue(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResourceCount@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAAIXZ
    unsigned int ResourceCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValue@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@QEAA?AUResourceCandidate@34567@AEBUhstring@7@AEBUResourceContext@34567@@Z
    WindissectOpaque TryGetValue(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@UEAA@XZ
    virtual ~ResourceMap();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CandidateFromMRTCandidate@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@AEAA?AUResourceCandidate@34567@AEBU8Core@3457@@Z
    WindissectOpaque CandidateFromMRTCandidate(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueByIndexImpl@ResourceMap@implementation@Resources@ApplicationModel@Windows@Microsoft@winrt@@AEAA?AU?$IKeyValuePair@Uhstring@winrt@@UResourceCandidate@Resources@ApplicationModel@Windows@Microsoft@2@@Collections@Foundation@57@IAEBUResourceContext@34567@@Z
    WindissectOpaque GetValueByIndexImpl(unsigned int, WindissectOpaque const &);
};
} // namespace winrt::Microsoft::Windows::ApplicationModel::Resources::implementation

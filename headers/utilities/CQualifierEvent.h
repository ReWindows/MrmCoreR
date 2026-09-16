#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 12 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CQualifierEvent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObserver@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJPEAVCResourceQualifierObservableMap@2345@@Z
    long AddObserver(WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAA@PEAVCContext@Runtime@2Microsoft@@PEAVIContextManager@1234@PEBVMrmProfile@27@@Z
    CQualifierEvent(WindissectOpaque *, WindissectOpaque *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScaleChanged@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJI_N@Z
    long OnScaleChanged(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHighContrastChangeNotification@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJXZ
    long RegisterHighContrastChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterScaleEvent@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIWindowLayout@2UI@5@_N@Z
    long RegisterScaleEvent(::Windows::UI::Core::IWindowLayout *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObserver@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJPEAVCResourceQualifierObservableMap@2345@@Z
    long RemoveObserver(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQualifierIfChanged@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAAJPEBG0W4_SetQualifierFlags@Runtime@3Microsoft@@@Z
    long UpdateQualifierIfChanged(unsigned short const *, unsigned short const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQualifierEvent@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    ~CQualifierEvent();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetQualifiers@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@AEAAJHPEBQEBG_N@Z
    long _ResetQualifiers(int, unsigned short const * const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterEvents@CQualifierEvent@Core@Resources@ApplicationModel@Windows@@AEAAJXZ
    long _UnregisterEvents();
};
} // namespace Windows::ApplicationModel::Resources::Core

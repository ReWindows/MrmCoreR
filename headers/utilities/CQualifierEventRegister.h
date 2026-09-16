#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Resources::Core {
class CQualifierEventRegister {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHighContrastChanged@CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@QEAAJPEAUIAccessibilitySettings@ViewManagement@UI@5@PEAUIInspectable@@@Z
    long OnHighContrastChanged(::Windows::UI::ViewManagement::IAccessibilitySettings *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLanguageRegionChanged@CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@QEAAJPEBG_N@Z
    long OnLanguageRegionChanged(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterHighContrastChangeNotification@CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@QEAAJXZ
    long RegisterHighContrastChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLanguageRegionAndLayoutChangeNotification@CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@QEAAJXZ
    long RegisterLanguageRegionAndLayoutChangeNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@QEAA@XZ
    ~CQualifierEventRegister();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterEvents@CQualifierEventRegister@Core@Resources@ApplicationModel@Windows@@AEAAJXZ
    long _UnregisterEvents();
};
} // namespace Windows::ApplicationModel::Resources::Core

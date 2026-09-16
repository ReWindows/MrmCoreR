#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 17 member(s).
namespace Microsoft::Resources::Build {
class DataItemOrchestrator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDataAndCreateInstanceReference@DataItemOrchestrator@Build@Resources@Microsoft@@UEAAJPEBXIHPEAPEAVIBuildInstanceReference@234@@Z
    virtual long AddDataAndCreateInstanceReference(void const *, unsigned int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOptimizedStringAndCreateInstanceReference@DataItemOrchestrator@Build@Resources@Microsoft@@QEAAJW4ResourceValueType@MrmEnvironment@34@PEBGPEBVIQualifierSet@34@PEAPEAVIBuildInstanceReference@234@PEAHPEAW45634@@Z
    long AddOptimizedStringAndCreateInstanceReference(int, unsigned short const *, WindissectOpaque const *, WindissectOpaque * *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddOptimizedStringAndCreateInstanceReference@DataItemOrchestrator@Build@Resources@Microsoft@@UEAAJW4ResourceValueType@MrmEnvironment@34@PEBGHPEAPEAVIBuildInstanceReference@234@PEAW45634@@Z
    virtual long AddOptimizedStringAndCreateInstanceReference(int, unsigned short const *, int, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStringAndCreateInstanceReference@DataItemOrchestrator@Build@Resources@Microsoft@@QEAAJPEBGPEBVIQualifierSet@34@PEAPEAVIBuildInstanceReference@234@PEAH@Z
    long AddStringAndCreateInstanceReference(unsigned short const *, WindissectOpaque const *, WindissectOpaque * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStringAndCreateInstanceReference@DataItemOrchestrator@Build@Resources@Microsoft@@UEAAJPEBGHPEAPEAVIBuildInstanceReference@234@@Z
    virtual long AddStringAndCreateInstanceReference(unsigned short const *, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DataItemOrchestrator@Build@Resources@Microsoft@@SAJPEAVFileBuilder@234@PEAVCoreProfile@34@PEAVDecisionInfoSectionBuilder@234@PEAPEAV1234@@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Finalize@DataItemOrchestrator@Build@Resources@Microsoft@@UEAAJXZ
    virtual long Finalize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalizedDataItemSection@DataItemOrchestrator@Build@Resources@Microsoft@@UEBAJHPEAPEAVDataItemsSectionBuilder@234@@Z
    virtual long GetFinalizedDataItemSection(int, WindissectOpaque * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNumFinalizedDataItemSections@DataItemOrchestrator@Build@Resources@Microsoft@@UEBAHXZ
    virtual int GetNumFinalizedDataItemSections() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueSize@DataItemOrchestrator@Build@Resources@Microsoft@@QEAAJPEBGPEA_K@Z
    long GetValueSize(unsigned short const *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OptimizeString@DataItemOrchestrator@Build@Resources@Microsoft@@QEAAJPEADPEBGPEA_K_KPEAW4ResourceValueType@MrmEnvironment@34@@Z
    long OptimizeString(char *, unsigned short const *, uint64_t *, uint64_t, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DataItemOrchestrator@Build@Resources@Microsoft@@UEAA@XZ
    virtual ~DataItemOrchestrator();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DataItemOrchestrator@Build@Resources@Microsoft@@IEAA@PEAVFileBuilder@123@PEAVCoreProfile@23@PEAVDecisionInfoSectionBuilder@123@@Z
    DataItemOrchestrator(WindissectOpaque *, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrAddDataItemSectionBuilder@DataItemOrchestrator@Build@Resources@Microsoft@@IEAAJHPEAPEAVDataItemsSectionBuilder@234@@Z
    long GetOrAddDataItemSectionBuilder(int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DataItemOrchestrator@Build@Resources@Microsoft@@IEAAJXZ
    long Init();
};
} // namespace Microsoft::Resources::Build

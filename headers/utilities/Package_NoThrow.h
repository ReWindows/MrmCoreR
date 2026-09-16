#pragma once
#include "../windissect_forwards.h"

// Reconstructed from MrmCoreR.dll by Windissect. 10 member(s).
namespace StateRepository::Cache::Entity {
class Package_NoThrow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long Get(::StateRepository::Cache::Manager_NoThrow &, int64_t, int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAreMrtResourcesRedirected@Package_NoThrow@Entity@Cache@StateRepository@@QEBA_NXZ
    bool GetAreMrtResourcesRedirected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByPackageFullName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@PEBGAEA_J@Z
    static long GetByPackageFullName(::StateRepository::Cache::Manager_NoThrow &, unsigned short const *, int64_t &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetByUserAndPackageFullName@Package_NoThrow@Entity@Cache@StateRepository@@SAJAEAVManager_NoThrow@34@_JPEBGW4CacheFlags@1234@AEAV1234@AEA_N@Z
    static long GetByUserAndPackageFullName(::StateRepository::Cache::Manager_NoThrow &, int64_t, unsigned short const *, int, ::StateRepository::Cache::Entity::Package_NoThrow &, bool &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    Package_NoThrow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Package_NoThrow@Entity@Cache@StateRepository@@QEAA@XZ
    ~Package_NoThrow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContextToObject@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVContext_NoThrow@34@AEAV1234@W4CacheFlags@1234@_J@Z
    static long ContextToObject(::StateRepository::Cache::Context_NoThrow &, ::StateRepository::Cache::Entity::Package_NoThrow &, int, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@Package_NoThrow@Entity@Cache@StateRepository@@CAJAEAVManager_NoThrow@34@_JAEAVContext_NoThrow@34@AEA_N@Z
    static long Open(::StateRepository::Cache::Manager_NoThrow &, int64_t, ::StateRepository::Cache::Context_NoThrow &, bool &);
};
} // namespace StateRepository::Cache::Entity

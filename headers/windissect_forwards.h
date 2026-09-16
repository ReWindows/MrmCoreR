#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Microsoft { class Resources; } 
namespace Microsoft { namespace WRL { class Details; } } 
namespace Windows { namespace ApplicationModel { namespace Resources { class Core; } } } 
namespace Windows { namespace Internal { class Details; } } 
class winrt; 
class AgileGitPtr; class AutoStubBias; class CIteratorOverVectorView; class CMarshaledInterface; class CMrtResourceContext; class CMrtResourceManager; class CMrtStringResolver; class CNamedResource; class CO_MTA_USAGE_COOKIE__; class CPercentDecodeString; class CPriFilePathCollection; class CResourceCandidate; class CResourceCandidateCollection; class CResourceManagerQueue; class CResourceMap; class CResourceReferenceHandler; class CResourceValidator; class CoTaskMemFree; class Destroy; class EnsureCOM; class EventRegistrationToken; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class GlobUserModelAdapter; class HINSTANCE__; class HKEY__; class HSTRING__; class IActivationFactory; class IClassFactory; class IInspectable; class IMrtResourceManager; class IMrtResourceManager2; class IMrtResourceManager3; class IMrtResourceManager4; class IMrtStringResolver; class INamedResource; class IPriFilePathCollection; class IResourceCandidate; class IResourceCandidate2; class IResourceCandidateCollection; class IResourceContext; class IResourceContext2; class IResourceContext3; class IResourceManagerQueue; class IResourceMap; class IResourceMap2; class IResourceMap3; class IResourceReferenceHandler; class IRpcOptions; class IScaleChangeSink; class IStream; class IUnknown; class IUri; class IWeakReference; class MrtLoggingData; class MrtRuntimeTelemetry; class RESOURCE_QUALIFIER; class ReleaseSRWLockExclusive; class RpcOptionsHelper; class RtlNameValueArray; class SRCacheContext; class SRCacheManager; class SRCache_Free; class StreamBufferHelper; class WilFailureReport; class WilFailureReportInformation; class _CONTEXT; class _CONTEXT_ID; class _DEFFILE_FILELIST_FILE_ENTRY; class _DEFFILE_FILELIST_FOLDER_ENTRY; class _DEFFILE_HNAMES_NODE; class _DEFFILE_HNAMES_NODE_LARGE; class _DEFFILE_HNAMES_SCOPE_INFO; class _DEFFILE_HNAMES_SCOPE_INFO_LARGE; class _DEFFILE_MAGIC; class _DEFFILE_SECTION_HEADER; class _DEFFILE_SECTION_TRAILER; class _DEFFILE_SECTION_TYPEID; class _ENVIRONMENT_DESCRIPTION; class _ENVIRONMENT_INITIALIZER; class _EXCEPTION_POINTERS; class _EXCEPTION_RECORD; class _FILETIME; class _GUID; class _MRMFILE_BASE_QUALIFIER; class _MRMFILE_DECISION; class _MRMFILE_ENVIRONMENT_REF; class _MRMFILE_ENVIRONMENT_VERSION_INFO; class _MRMFILE_HSCHEMA_VERSION_INFO; class _MRMFILE_INDEX_INSTANCE; class _MRMFILE_MAP_VALUE_LARGE; class _MRMFILE_QUALIFIER; class _MRMFILE_QUALIFIER_SET; class _MRMFILE_RESOURCE_LINK_HEADER; class _MRMFILE_RESOURCE_MAP_HEADER; class _MRMFILE_RESOURCE_MAP_HEADER_LARGE; class _PII_FILTER; class _QUALIFIER_INFO; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TOKEN_USER; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _WNF_STATE_NAME; class _WNF_TYPE_ID; class _WNF_USER_SUBSCRIPTION; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class iterator; class lambda_7030d12a21dba11210293044e97fe9c7; class lambda_a6360fb4fc09a15bf3a6e5d657e40b05; class lambda_b6b759b2bf0edae4b6b00ca73c47e93a; class lambda_b70241e9b5ebaad244db3e52d52cab17; class lambda_c2fd7731c5ae0d37e65ea73be67c0f1b; class permission; class thunk; class type; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; class winrt; 
namespace ATL { class CComBSTR; } 
namespace Microsoft { class Resources; } 
namespace Microsoft { namespace WRL { class ActivationFactory; class AgileRef; class CloakedIid; class ComPtr; class Details; class EventSource; class FtmBase; class Implements; class InvokeModeOptions; class RuntimeClassFlags; class SimpleClassFactory; class WeakRef; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; } } } } 
namespace StateRepository { namespace Cache { class Context_NoThrow; class Key_NoThrow; class Manager_NoThrow; } } 
namespace StateRepository { namespace Cache { namespace Entity { class PackageFamily_NoThrow; class PackageIndexIterator_NoThrow; class PackageUser_NoThrow; class Package_NoThrow; class User_NoThrow; } } } 
namespace Windows { } 
namespace Windows { namespace ApplicationModel { namespace Core { class ICoreApplication; } } } 
namespace Windows { namespace ApplicationModel { namespace Resources { class CResourceLoader; class CResourceLoaderFactory; class Core; class IResourceLoader; class IResourceLoader2; class IResourceLoaderFactory; class IResourceLoaderStatics; class IResourceLoaderStatics2; class IResourceLoaderStatics3; class IResourceLoaderStatics4; } } } 
namespace Windows { namespace Foundation { namespace Collections { class Detail; } } } 
namespace Windows { namespace Internal { class ComTaskPoolHandler; class Details; class GitPtr; class IAsyncFireCompletion; class StaticLifetimeStore; class String; class StringReference; } } 
namespace Windows { namespace Internal { namespace ComTaskPool { class CTaskWrapper; } } } 
namespace Windows { namespace Management { namespace Deployment { namespace Internal { class IPackageManagerRepairAclsInternal; class IPackageManagerStateCreationInternal; } } } } 
namespace Windows { namespace Storage { class IStorageFile; class StorageFile; } } 
namespace Windows { namespace Storage { namespace Streams { class IRandomAccessStream; } } } 
namespace Windows { namespace UI { class IUIContext; class IWindowContextPartner; } } 
namespace Windows { namespace UI { namespace Core { class ICoreWindow; class ICoreWindowStatic; class IInternalWindowAggregate; class IWindowLayout; } } } 
namespace Windows { namespace UI { namespace ViewManagement { class AccessibilitySettings; class IAccessibilitySettings; } } } 
namespace XWinRT { class InterfaceLifetimeTraits; } 
namespace std { class _Iterator_base0; class _Node_handle; class _Node_handle_map_base; class _Tree_find_result; class _Tree_id; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class allocator; class bad_alloc; class bad_array_new_length; class basic_string; class basic_string_view; class char_traits; class exception; class input_iterator_tag; class invalid_argument; class less; class logic_error; class map; class nothrow_t; class nullptr_t; class pair; } 
namespace wil { class FailureInfo; class ResultException; class function_deleter; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class FeatureStateManager; class RefCountedContainer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class token_info_deleter; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 


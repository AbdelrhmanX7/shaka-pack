// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: widevine_pssh_data.proto

#include "widevine_pssh_data.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace shaka {
namespace media {

inline constexpr WidevinePsshData::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        key_id_{},
        provider_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        content_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        policy_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        grouped_license_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        algorithm_{static_cast< ::shaka::media::WidevinePsshData_Algorithm >(0)},
        crypto_period_index_{0u},
        protection_scheme_{0u} {}

template <typename>
PROTOBUF_CONSTEXPR WidevinePsshData::WidevinePsshData(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct WidevinePsshDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WidevinePsshDataDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WidevinePsshDataDefaultTypeInternal() {}
  union {
    WidevinePsshData _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WidevinePsshDataDefaultTypeInternal _WidevinePsshData_default_instance_;

inline constexpr WidevineHeader::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        key_ids_{},
        provider_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        content_id_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()) {}

template <typename>
PROTOBUF_CONSTEXPR WidevineHeader::WidevineHeader(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct WidevineHeaderDefaultTypeInternal {
  PROTOBUF_CONSTEXPR WidevineHeaderDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~WidevineHeaderDefaultTypeInternal() {}
  union {
    WidevineHeader _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 WidevineHeaderDefaultTypeInternal _WidevineHeader_default_instance_;
}  // namespace media
}  // namespace shaka
static ::_pb::Metadata file_level_metadata_widevine_5fpssh_5fdata_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_widevine_5fpssh_5fdata_2eproto[1];
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_widevine_5fpssh_5fdata_2eproto = nullptr;
const ::uint32_t TableStruct_widevine_5fpssh_5fdata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.algorithm_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.key_id_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.provider_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.content_id_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.policy_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.crypto_period_index_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.grouped_license_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevinePsshData, _impl_.protection_scheme_),
    4,
    ~0u,
    0,
    1,
    2,
    5,
    3,
    6,
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevineHeader, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevineHeader, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevineHeader, _impl_.key_ids_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevineHeader, _impl_.provider_),
    PROTOBUF_FIELD_OFFSET(::shaka::media::WidevineHeader, _impl_.content_id_),
    ~0u,
    0,
    1,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 16, -1, sizeof(::shaka::media::WidevinePsshData)},
        {24, 35, -1, sizeof(::shaka::media::WidevineHeader)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::shaka::media::_WidevinePsshData_default_instance_._instance,
    &::shaka::media::_WidevineHeader_default_instance_._instance,
};
const char descriptor_table_protodef_widevine_5fpssh_5fdata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\030widevine_pssh_data.proto\022\013shaka.media\""
    "\217\002\n\020WidevinePsshData\022:\n\talgorithm\030\001 \001(\0162"
    "\'.shaka.media.WidevinePsshData.Algorithm"
    "\022\016\n\006key_id\030\002 \003(\014\022\020\n\010provider\030\003 \001(\t\022\022\n\nco"
    "ntent_id\030\004 \001(\014\022\016\n\006policy\030\006 \001(\t\022\033\n\023crypto"
    "_period_index\030\007 \001(\r\022\027\n\017grouped_license\030\010"
    " \001(\014\022\031\n\021protection_scheme\030\t \001(\r\"(\n\tAlgor"
    "ithm\022\017\n\013UNENCRYPTED\020\000\022\n\n\006AESCTR\020\001\"G\n\016Wid"
    "evineHeader\022\017\n\007key_ids\030\002 \003(\t\022\020\n\010provider"
    "\030\003 \001(\t\022\022\n\ncontent_id\030\004 \001(\014"
};
static ::absl::once_flag descriptor_table_widevine_5fpssh_5fdata_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_widevine_5fpssh_5fdata_2eproto = {
    false,
    false,
    386,
    descriptor_table_protodef_widevine_5fpssh_5fdata_2eproto,
    "widevine_pssh_data.proto",
    &descriptor_table_widevine_5fpssh_5fdata_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_widevine_5fpssh_5fdata_2eproto::offsets,
    file_level_metadata_widevine_5fpssh_5fdata_2eproto,
    file_level_enum_descriptors_widevine_5fpssh_5fdata_2eproto,
    file_level_service_descriptors_widevine_5fpssh_5fdata_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_widevine_5fpssh_5fdata_2eproto_getter() {
  return &descriptor_table_widevine_5fpssh_5fdata_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_widevine_5fpssh_5fdata_2eproto(&descriptor_table_widevine_5fpssh_5fdata_2eproto);
namespace shaka {
namespace media {
const ::google::protobuf::EnumDescriptor* WidevinePsshData_Algorithm_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_widevine_5fpssh_5fdata_2eproto);
  return file_level_enum_descriptors_widevine_5fpssh_5fdata_2eproto[0];
}
PROTOBUF_CONSTINIT const uint32_t WidevinePsshData_Algorithm_internal_data_[] = {
    131072u, 0u, };
bool WidevinePsshData_Algorithm_IsValid(int value) {
  return 0 <= value && value <= 1;
}
#if (__cplusplus < 201703) && \
  (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

constexpr WidevinePsshData_Algorithm WidevinePsshData::UNENCRYPTED;
constexpr WidevinePsshData_Algorithm WidevinePsshData::AESCTR;
constexpr WidevinePsshData_Algorithm WidevinePsshData::Algorithm_MIN;
constexpr WidevinePsshData_Algorithm WidevinePsshData::Algorithm_MAX;
constexpr int WidevinePsshData::Algorithm_ARRAYSIZE;

#endif  // (__cplusplus < 201703) &&
        // (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
// ===================================================================

class WidevinePsshData::_Internal {
 public:
  using HasBits = decltype(std::declval<WidevinePsshData>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_._has_bits_);
  static void set_has_algorithm(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_provider(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_content_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_policy(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_crypto_period_index(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_grouped_license(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_protection_scheme(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
};

WidevinePsshData::WidevinePsshData(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shaka.media.WidevinePsshData)
}
inline PROTOBUF_NDEBUG_INLINE WidevinePsshData::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        key_id_{visibility, arena, from.key_id_},
        provider_(arena, from.provider_),
        content_id_(arena, from.content_id_),
        policy_(arena, from.policy_),
        grouped_license_(arena, from.grouped_license_) {}

WidevinePsshData::WidevinePsshData(
    ::google::protobuf::Arena* arena,
    const WidevinePsshData& from)
    : ::google::protobuf::Message(arena) {
  WidevinePsshData* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, algorithm_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, algorithm_),
           offsetof(Impl_, protection_scheme_) -
               offsetof(Impl_, algorithm_) +
               sizeof(Impl_::protection_scheme_));

  // @@protoc_insertion_point(copy_constructor:shaka.media.WidevinePsshData)
}
inline PROTOBUF_NDEBUG_INLINE WidevinePsshData::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        key_id_{visibility, arena},
        provider_(arena),
        content_id_(arena),
        policy_(arena),
        grouped_license_(arena) {}

inline void WidevinePsshData::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, algorithm_),
           0,
           offsetof(Impl_, protection_scheme_) -
               offsetof(Impl_, algorithm_) +
               sizeof(Impl_::protection_scheme_));
}
WidevinePsshData::~WidevinePsshData() {
  // @@protoc_insertion_point(destructor:shaka.media.WidevinePsshData)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void WidevinePsshData::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.provider_.Destroy();
  _impl_.content_id_.Destroy();
  _impl_.policy_.Destroy();
  _impl_.grouped_license_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void WidevinePsshData::Clear() {
// @@protoc_insertion_point(message_clear_start:shaka.media.WidevinePsshData)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.key_id_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.provider_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.content_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.policy_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.grouped_license_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000070u) {
    ::memset(&_impl_.algorithm_, 0, static_cast<::size_t>(
        reinterpret_cast<char*>(&_impl_.protection_scheme_) -
        reinterpret_cast<char*>(&_impl_.algorithm_)) + sizeof(_impl_.protection_scheme_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* WidevinePsshData::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 8, 1, 59, 2> WidevinePsshData::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_._has_bits_),
    0, // no _extensions_
    9, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966800,  // skipmap
    offsetof(decltype(_table_), field_entries),
    8,  // num_field_entries
    1,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_WidevinePsshData_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // optional .shaka.media.WidevinePsshData.Algorithm algorithm = 1;
    {::_pbi::TcParser::FastEr0S1,
     {8, 4, 1, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.algorithm_)}},
    // repeated bytes key_id = 2;
    {::_pbi::TcParser::FastBR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.key_id_)}},
    // optional string provider = 3;
    {::_pbi::TcParser::FastSS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.provider_)}},
    // optional bytes content_id = 4;
    {::_pbi::TcParser::FastBS1,
     {34, 1, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.content_id_)}},
    {::_pbi::TcParser::MiniParse, {}},
    // optional string policy = 6;
    {::_pbi::TcParser::FastSS1,
     {50, 2, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.policy_)}},
    // optional uint32 crypto_period_index = 7;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WidevinePsshData, _impl_.crypto_period_index_), 5>(),
     {56, 5, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.crypto_period_index_)}},
    // optional bytes grouped_license = 8;
    {::_pbi::TcParser::FastBS1,
     {66, 3, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.grouped_license_)}},
    // optional uint32 protection_scheme = 9;
    {::_pbi::TcParser::SingularVarintNoZag1<::uint32_t, offsetof(WidevinePsshData, _impl_.protection_scheme_), 6>(),
     {72, 6, 0, PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.protection_scheme_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // optional .shaka.media.WidevinePsshData.Algorithm algorithm = 1;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.algorithm_), _Internal::kHasBitsOffset + 4, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kEnumRange)},
    // repeated bytes key_id = 2;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.key_id_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kBytes | ::_fl::kRepSString)},
    // optional string provider = 3;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.provider_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional bytes content_id = 4;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.content_id_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional string policy = 6;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.policy_), _Internal::kHasBitsOffset + 2, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional uint32 crypto_period_index = 7;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.crypto_period_index_), _Internal::kHasBitsOffset + 5, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
    // optional bytes grouped_license = 8;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.grouped_license_), _Internal::kHasBitsOffset + 3, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
    // optional uint32 protection_scheme = 9;
    {PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.protection_scheme_), _Internal::kHasBitsOffset + 6, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kUInt32)},
  }}, {{
    {0, 2},
  }}, {{
    "\34\0\0\10\0\6\0\0\0\0\0\0\0\0\0\0"
    "shaka.media.WidevinePsshData"
    "provider"
    "policy"
  }},
};

::uint8_t* WidevinePsshData::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shaka.media.WidevinePsshData)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional .shaka.media.WidevinePsshData.Algorithm algorithm = 1;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
        1, this->_internal_algorithm(), target);
  }

  // repeated bytes key_id = 2;
  for (int i = 0, n = this->_internal_key_id_size(); i < n; ++i) {
    const auto& s = this->_internal_key_id().Get(i);
    target = stream->WriteBytes(2, s, target);
  }

  // optional string provider = 3;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_provider();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "shaka.media.WidevinePsshData.provider");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional bytes content_id = 4;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_content_id();
    target = stream->WriteBytesMaybeAliased(4, _s, target);
  }

  // optional string policy = 6;
  if (cached_has_bits & 0x00000004u) {
    const std::string& _s = this->_internal_policy();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "shaka.media.WidevinePsshData.policy");
    target = stream->WriteStringMaybeAliased(6, _s, target);
  }

  // optional uint32 crypto_period_index = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        7, this->_internal_crypto_period_index(), target);
  }

  // optional bytes grouped_license = 8;
  if (cached_has_bits & 0x00000008u) {
    const std::string& _s = this->_internal_grouped_license();
    target = stream->WriteBytesMaybeAliased(8, _s, target);
  }

  // optional uint32 protection_scheme = 9;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(
        9, this->_internal_protection_scheme(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shaka.media.WidevinePsshData)
  return target;
}

::size_t WidevinePsshData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shaka.media.WidevinePsshData)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes key_id = 2;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_key_id().size());
  for (int i = 0, n = _internal_key_id().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
        _internal_key_id().Get(i));
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional string provider = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_provider());
    }

    // optional bytes content_id = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_content_id());
    }

    // optional string policy = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_policy());
    }

    // optional bytes grouped_license = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_grouped_license());
    }

    // optional .shaka.media.WidevinePsshData.Algorithm algorithm = 1;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
                    ::_pbi::WireFormatLite::EnumSize(this->_internal_algorithm());
    }

    // optional uint32 crypto_period_index = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_crypto_period_index());
    }

    // optional uint32 protection_scheme = 9;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(
          this->_internal_protection_scheme());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData WidevinePsshData::_class_data_ = {
    WidevinePsshData::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* WidevinePsshData::GetClassData() const {
  return &_class_data_;
}

void WidevinePsshData::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<WidevinePsshData*>(&to_msg);
  auto& from = static_cast<const WidevinePsshData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shaka.media.WidevinePsshData)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_key_id()->MergeFrom(from._internal_key_id());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_provider(from._internal_provider());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_content_id(from._internal_content_id());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_policy(from._internal_policy());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_internal_set_grouped_license(from._internal_grouped_license());
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.algorithm_ = from._impl_.algorithm_;
    }
    if (cached_has_bits & 0x00000020u) {
      _this->_impl_.crypto_period_index_ = from._impl_.crypto_period_index_;
    }
    if (cached_has_bits & 0x00000040u) {
      _this->_impl_.protection_scheme_ = from._impl_.protection_scheme_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void WidevinePsshData::CopyFrom(const WidevinePsshData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shaka.media.WidevinePsshData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool WidevinePsshData::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* WidevinePsshData::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void WidevinePsshData::InternalSwap(WidevinePsshData* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.key_id_.InternalSwap(&other->_impl_.key_id_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.provider_, &other->_impl_.provider_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.content_id_, &other->_impl_.content_id_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.policy_, &other->_impl_.policy_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.grouped_license_, &other->_impl_.grouped_license_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.protection_scheme_)
      + sizeof(WidevinePsshData::_impl_.protection_scheme_)
      - PROTOBUF_FIELD_OFFSET(WidevinePsshData, _impl_.algorithm_)>(
          reinterpret_cast<char*>(&_impl_.algorithm_),
          reinterpret_cast<char*>(&other->_impl_.algorithm_));
}

::google::protobuf::Metadata WidevinePsshData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_widevine_5fpssh_5fdata_2eproto_getter, &descriptor_table_widevine_5fpssh_5fdata_2eproto_once,
      file_level_metadata_widevine_5fpssh_5fdata_2eproto[0]);
}
// ===================================================================

class WidevineHeader::_Internal {
 public:
  using HasBits = decltype(std::declval<WidevineHeader>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_._has_bits_);
  static void set_has_provider(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_content_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

WidevineHeader::WidevineHeader(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:shaka.media.WidevineHeader)
}
inline PROTOBUF_NDEBUG_INLINE WidevineHeader::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        key_ids_{visibility, arena, from.key_ids_},
        provider_(arena, from.provider_),
        content_id_(arena, from.content_id_) {}

WidevineHeader::WidevineHeader(
    ::google::protobuf::Arena* arena,
    const WidevineHeader& from)
    : ::google::protobuf::Message(arena) {
  WidevineHeader* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:shaka.media.WidevineHeader)
}
inline PROTOBUF_NDEBUG_INLINE WidevineHeader::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        key_ids_{visibility, arena},
        provider_(arena),
        content_id_(arena) {}

inline void WidevineHeader::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
WidevineHeader::~WidevineHeader() {
  // @@protoc_insertion_point(destructor:shaka.media.WidevineHeader)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void WidevineHeader::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.provider_.Destroy();
  _impl_.content_id_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void WidevineHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:shaka.media.WidevineHeader)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.key_ids_.Clear();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.provider_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.content_id_.ClearNonDefaultToEmpty();
    }
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* WidevineHeader::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<2, 3, 0, 50, 2> WidevineHeader::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_._has_bits_),
    0, // no _extensions_
    4, 24,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967281,  // skipmap
    offsetof(decltype(_table_), field_entries),
    3,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_WidevineHeader_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional bytes content_id = 4;
    {::_pbi::TcParser::FastBS1,
     {34, 1, 0, PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.content_id_)}},
    {::_pbi::TcParser::MiniParse, {}},
    // repeated string key_ids = 2;
    {::_pbi::TcParser::FastSR1,
     {18, 63, 0, PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.key_ids_)}},
    // optional string provider = 3;
    {::_pbi::TcParser::FastSS1,
     {26, 0, 0, PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.provider_)}},
  }}, {{
    65535, 65535
  }}, {{
    // repeated string key_ids = 2;
    {PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.key_ids_), -1, 0,
    (0 | ::_fl::kFcRepeated | ::_fl::kRawString | ::_fl::kRepSString)},
    // optional string provider = 3;
    {PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.provider_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kRawString | ::_fl::kRepAString)},
    // optional bytes content_id = 4;
    {PROTOBUF_FIELD_OFFSET(WidevineHeader, _impl_.content_id_), _Internal::kHasBitsOffset + 1, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
    "\32\7\10\0\0\0\0\0"
    "shaka.media.WidevineHeader"
    "key_ids"
    "provider"
  }},
};

::uint8_t* WidevineHeader::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:shaka.media.WidevineHeader)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // repeated string key_ids = 2;
  for (int i = 0, n = this->_internal_key_ids_size(); i < n; ++i) {
    const auto& s = this->_internal_key_ids().Get(i);
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(s.data(), static_cast<int>(s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "shaka.media.WidevineHeader.key_ids");
    target = stream->WriteString(2, s, target);
  }

  cached_has_bits = _impl_._has_bits_[0];
  // optional string provider = 3;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_provider();
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(_s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormat::SERIALIZE,
                                "shaka.media.WidevineHeader.provider");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  // optional bytes content_id = 4;
  if (cached_has_bits & 0x00000002u) {
    const std::string& _s = this->_internal_content_id();
    target = stream->WriteBytesMaybeAliased(4, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:shaka.media.WidevineHeader)
  return target;
}

::size_t WidevineHeader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:shaka.media.WidevineHeader)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string key_ids = 2;
  total_size += 1 * ::google::protobuf::internal::FromIntSize(_internal_key_ids().size());
  for (int i = 0, n = _internal_key_ids().size(); i < n; ++i) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
        _internal_key_ids().Get(i));
  }
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string provider = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                      this->_internal_provider());
    }

    // optional bytes content_id = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                      this->_internal_content_id());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData WidevineHeader::_class_data_ = {
    WidevineHeader::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* WidevineHeader::GetClassData() const {
  return &_class_data_;
}

void WidevineHeader::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<WidevineHeader*>(&to_msg);
  auto& from = static_cast<const WidevineHeader&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:shaka.media.WidevineHeader)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_key_ids()->MergeFrom(from._internal_key_ids());
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_provider(from._internal_provider());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_content_id(from._internal_content_id());
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void WidevineHeader::CopyFrom(const WidevineHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:shaka.media.WidevineHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool WidevineHeader::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* WidevineHeader::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void WidevineHeader::InternalSwap(WidevineHeader* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  _impl_.key_ids_.InternalSwap(&other->_impl_.key_ids_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.provider_, &other->_impl_.provider_, arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.content_id_, &other->_impl_.content_id_, arena);
}

::google::protobuf::Metadata WidevineHeader::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_widevine_5fpssh_5fdata_2eproto_getter, &descriptor_table_widevine_5fpssh_5fdata_2eproto_once,
      file_level_metadata_widevine_5fpssh_5fdata_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace media
}  // namespace shaka
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
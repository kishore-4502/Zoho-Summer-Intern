// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: version.proto

#include "version.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

PROTOBUF_CONSTEXPR Version::Version(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.createdtime_)*/{}
  , /*decltype(_impl_.projectid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.changescount_)*/0
  , /*decltype(_impl_.versionnumber_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct VersionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR VersionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~VersionDefaultTypeInternal() {}
  union {
    Version _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 VersionDefaultTypeInternal _Version_default_instance_;
PROTOBUF_CONSTEXPR Changes::Changes(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.linenum_)*/{}
  , /*decltype(_impl_._linenum_cached_byte_size_)*/{0}
  , /*decltype(_impl_.action_)*/{}
  , /*decltype(_impl_._action_cached_byte_size_)*/{0}
  , /*decltype(_impl_.changes_)*/{}
  , /*decltype(_impl_.createdtime_)*/{}
  , /*decltype(_impl_.id_)*/{}
  , /*decltype(_impl_.changescount_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ChangesDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChangesDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChangesDefaultTypeInternal() {}
  union {
    Changes _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChangesDefaultTypeInternal _Changes_default_instance_;
static ::_pb::Metadata file_level_metadata_version_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_version_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_version_2eproto = nullptr;

const uint32_t TableStruct_version_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Version, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.changescount_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.versionnumber_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.projectid_),
  PROTOBUF_FIELD_OFFSET(::Version, _impl_.createdtime_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Changes, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.linenum_),
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.action_),
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.changes_),
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.changescount_),
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.createdtime_),
  PROTOBUF_FIELD_OFFSET(::Changes, _impl_.id_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Version)},
  { 10, -1, -1, sizeof(::Changes)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Version_default_instance_._instance,
  &::_Changes_default_instance_._instance,
};

const char descriptor_table_protodef_version_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rversion.proto\"^\n\007Version\022\024\n\014changesCou"
  "nt\030\001 \001(\005\022\025\n\rversionNumber\030\002 \001(\005\022\021\n\tproje"
  "ctId\030\003 \001(\t\022\023\n\013createdTime\030\004 \003(\t\"\256\001\n\007Chan"
  "ges\022\017\n\007lineNum\030\001 \003(\005\022\037\n\006action\030\002 \003(\0162\017.C"
  "hanges.change\022\017\n\007changes\030\003 \003(\t\022\024\n\014change"
  "sCount\030\004 \001(\005\022\023\n\013createdTime\030\005 \003(\t\022\n\n\002id\030"
  "\006 \003(\t\")\n\006change\022\007\n\003ADD\020\000\022\n\n\006REMOVE\020\001\022\n\n\006"
  "UPDATE\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_version_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_version_2eproto = {
    false, false, 296, descriptor_table_protodef_version_2eproto,
    "version.proto",
    &descriptor_table_version_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_version_2eproto::offsets,
    file_level_metadata_version_2eproto, file_level_enum_descriptors_version_2eproto,
    file_level_service_descriptors_version_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_version_2eproto_getter() {
  return &descriptor_table_version_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_version_2eproto(&descriptor_table_version_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Changes_change_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_version_2eproto);
  return file_level_enum_descriptors_version_2eproto[0];
}
bool Changes_change_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Changes_change Changes::ADD;
constexpr Changes_change Changes::REMOVE;
constexpr Changes_change Changes::UPDATE;
constexpr Changes_change Changes::change_MIN;
constexpr Changes_change Changes::change_MAX;
constexpr int Changes::change_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Version::_Internal {
 public:
};

Version::Version(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Version)
}
Version::Version(const Version& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Version* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.createdtime_){from._impl_.createdtime_}
    , decltype(_impl_.projectid_){}
    , decltype(_impl_.changescount_){}
    , decltype(_impl_.versionnumber_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.projectid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.projectid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_projectid().empty()) {
    _this->_impl_.projectid_.Set(from._internal_projectid(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.changescount_, &from._impl_.changescount_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.versionnumber_) -
    reinterpret_cast<char*>(&_impl_.changescount_)) + sizeof(_impl_.versionnumber_));
  // @@protoc_insertion_point(copy_constructor:Version)
}

inline void Version::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.createdtime_){arena}
    , decltype(_impl_.projectid_){}
    , decltype(_impl_.changescount_){0}
    , decltype(_impl_.versionnumber_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.projectid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.projectid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Version::~Version() {
  // @@protoc_insertion_point(destructor:Version)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Version::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.createdtime_.~RepeatedPtrField();
  _impl_.projectid_.Destroy();
}

void Version::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Version::Clear() {
// @@protoc_insertion_point(message_clear_start:Version)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.createdtime_.Clear();
  _impl_.projectid_.ClearToEmpty();
  ::memset(&_impl_.changescount_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.versionnumber_) -
      reinterpret_cast<char*>(&_impl_.changescount_)) + sizeof(_impl_.versionnumber_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Version::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 changesCount = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.changescount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 versionNumber = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.versionnumber_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string projectId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_projectid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Version.projectId"));
        } else
          goto handle_unusual;
        continue;
      // repeated string createdTime = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_createdtime();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Version.createdTime"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Version::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Version)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 changesCount = 1;
  if (this->_internal_changescount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_changescount(), target);
  }

  // int32 versionNumber = 2;
  if (this->_internal_versionnumber() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_versionnumber(), target);
  }

  // string projectId = 3;
  if (!this->_internal_projectid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_projectid().data(), static_cast<int>(this->_internal_projectid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.projectId");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_projectid(), target);
  }

  // repeated string createdTime = 4;
  for (int i = 0, n = this->_internal_createdtime_size(); i < n; i++) {
    const auto& s = this->_internal_createdtime(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Version.createdTime");
    target = stream->WriteString(4, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Version)
  return target;
}

size_t Version::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Version)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string createdTime = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.createdtime_.size());
  for (int i = 0, n = _impl_.createdtime_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.createdtime_.Get(i));
  }

  // string projectId = 3;
  if (!this->_internal_projectid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_projectid());
  }

  // int32 changesCount = 1;
  if (this->_internal_changescount() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_changescount());
  }

  // int32 versionNumber = 2;
  if (this->_internal_versionnumber() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_versionnumber());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Version::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Version::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Version::GetClassData() const { return &_class_data_; }


void Version::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Version*>(&to_msg);
  auto& from = static_cast<const Version&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Version)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.createdtime_.MergeFrom(from._impl_.createdtime_);
  if (!from._internal_projectid().empty()) {
    _this->_internal_set_projectid(from._internal_projectid());
  }
  if (from._internal_changescount() != 0) {
    _this->_internal_set_changescount(from._internal_changescount());
  }
  if (from._internal_versionnumber() != 0) {
    _this->_internal_set_versionnumber(from._internal_versionnumber());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Version::CopyFrom(const Version& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Version)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Version::IsInitialized() const {
  return true;
}

void Version::InternalSwap(Version* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.createdtime_.InternalSwap(&other->_impl_.createdtime_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.projectid_, lhs_arena,
      &other->_impl_.projectid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Version, _impl_.versionnumber_)
      + sizeof(Version::_impl_.versionnumber_)
      - PROTOBUF_FIELD_OFFSET(Version, _impl_.changescount_)>(
          reinterpret_cast<char*>(&_impl_.changescount_),
          reinterpret_cast<char*>(&other->_impl_.changescount_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Version::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[0]);
}

// ===================================================================

class Changes::_Internal {
 public:
};

Changes::Changes(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Changes)
}
Changes::Changes(const Changes& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Changes* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.linenum_){from._impl_.linenum_}
    , /*decltype(_impl_._linenum_cached_byte_size_)*/{0}
    , decltype(_impl_.action_){from._impl_.action_}
    , /*decltype(_impl_._action_cached_byte_size_)*/{0}
    , decltype(_impl_.changes_){from._impl_.changes_}
    , decltype(_impl_.createdtime_){from._impl_.createdtime_}
    , decltype(_impl_.id_){from._impl_.id_}
    , decltype(_impl_.changescount_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.changescount_ = from._impl_.changescount_;
  // @@protoc_insertion_point(copy_constructor:Changes)
}

inline void Changes::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.linenum_){arena}
    , /*decltype(_impl_._linenum_cached_byte_size_)*/{0}
    , decltype(_impl_.action_){arena}
    , /*decltype(_impl_._action_cached_byte_size_)*/{0}
    , decltype(_impl_.changes_){arena}
    , decltype(_impl_.createdtime_){arena}
    , decltype(_impl_.id_){arena}
    , decltype(_impl_.changescount_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Changes::~Changes() {
  // @@protoc_insertion_point(destructor:Changes)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Changes::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.linenum_.~RepeatedField();
  _impl_.action_.~RepeatedField();
  _impl_.changes_.~RepeatedPtrField();
  _impl_.createdtime_.~RepeatedPtrField();
  _impl_.id_.~RepeatedPtrField();
}

void Changes::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Changes::Clear() {
// @@protoc_insertion_point(message_clear_start:Changes)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.linenum_.Clear();
  _impl_.action_.Clear();
  _impl_.changes_.Clear();
  _impl_.createdtime_.Clear();
  _impl_.id_.Clear();
  _impl_.changescount_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Changes::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 lineNum = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_linenum(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 8) {
          _internal_add_linenum(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .Changes.change action = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_action(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_action(static_cast<::Changes_change>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated string changes = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_changes();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Changes.changes"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int32 changesCount = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.changescount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string createdTime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_createdtime();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Changes.createdTime"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated string id = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_id();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "Changes.id"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<50>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Changes::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Changes)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 lineNum = 1;
  {
    int byte_size = _impl_._linenum_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          1, _internal_linenum(), byte_size, target);
    }
  }

  // repeated .Changes.change action = 2;
  {
    int byte_size = _impl_._action_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          2, _impl_.action_, byte_size, target);
    }
  }

  // repeated string changes = 3;
  for (int i = 0, n = this->_internal_changes_size(); i < n; i++) {
    const auto& s = this->_internal_changes(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Changes.changes");
    target = stream->WriteString(3, s, target);
  }

  // int32 changesCount = 4;
  if (this->_internal_changescount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_changescount(), target);
  }

  // repeated string createdTime = 5;
  for (int i = 0, n = this->_internal_createdtime_size(); i < n; i++) {
    const auto& s = this->_internal_createdtime(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Changes.createdTime");
    target = stream->WriteString(5, s, target);
  }

  // repeated string id = 6;
  for (int i = 0, n = this->_internal_id_size(); i < n; i++) {
    const auto& s = this->_internal_id(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Changes.id");
    target = stream->WriteString(6, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Changes)
  return target;
}

size_t Changes::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Changes)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 lineNum = 1;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.linenum_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._linenum_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated .Changes.change action = 2;
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_action_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_action(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._action_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string changes = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.changes_.size());
  for (int i = 0, n = _impl_.changes_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.changes_.Get(i));
  }

  // repeated string createdTime = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.createdtime_.size());
  for (int i = 0, n = _impl_.createdtime_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.createdtime_.Get(i));
  }

  // repeated string id = 6;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.id_.size());
  for (int i = 0, n = _impl_.id_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.id_.Get(i));
  }

  // int32 changesCount = 4;
  if (this->_internal_changescount() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_changescount());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Changes::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Changes::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Changes::GetClassData() const { return &_class_data_; }


void Changes::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Changes*>(&to_msg);
  auto& from = static_cast<const Changes&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Changes)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.linenum_.MergeFrom(from._impl_.linenum_);
  _this->_impl_.action_.MergeFrom(from._impl_.action_);
  _this->_impl_.changes_.MergeFrom(from._impl_.changes_);
  _this->_impl_.createdtime_.MergeFrom(from._impl_.createdtime_);
  _this->_impl_.id_.MergeFrom(from._impl_.id_);
  if (from._internal_changescount() != 0) {
    _this->_internal_set_changescount(from._internal_changescount());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Changes::CopyFrom(const Changes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Changes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Changes::IsInitialized() const {
  return true;
}

void Changes::InternalSwap(Changes* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.linenum_.InternalSwap(&other->_impl_.linenum_);
  _impl_.action_.InternalSwap(&other->_impl_.action_);
  _impl_.changes_.InternalSwap(&other->_impl_.changes_);
  _impl_.createdtime_.InternalSwap(&other->_impl_.createdtime_);
  _impl_.id_.InternalSwap(&other->_impl_.id_);
  swap(_impl_.changescount_, other->_impl_.changescount_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Changes::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_version_2eproto_getter, &descriptor_table_version_2eproto_once,
      file_level_metadata_version_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Version*
Arena::CreateMaybeMessage< ::Version >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Version >(arena);
}
template<> PROTOBUF_NOINLINE ::Changes*
Arena::CreateMaybeMessage< ::Changes >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Changes >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

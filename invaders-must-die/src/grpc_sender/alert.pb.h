// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: alert.proto
// Protobuf C++ Version: 4.25.0

#ifndef GOOGLE_PROTOBUF_INCLUDED_alert_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_alert_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025000 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/generated_enum_reflection.h"
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_alert_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_alert_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_alert_2eproto;
namespace alerts {
class Alert;
struct AlertDefaultTypeInternal;
extern AlertDefaultTypeInternal _Alert_default_instance_;
class Result;
struct ResultDefaultTypeInternal;
extern ResultDefaultTypeInternal _Result_default_instance_;
}  // namespace alerts
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace alerts {
enum Alert_RuleType : int {
  Alert_RuleType_RULE_NOTE = 0,
  Alert_RuleType_RULE_WARN = 1,
  Alert_RuleType_RULE_ALERT = 2,
  Alert_RuleType_Alert_RuleType_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Alert_RuleType_Alert_RuleType_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Alert_RuleType_IsValid(int value);
extern const uint32_t Alert_RuleType_internal_data_[];
constexpr Alert_RuleType Alert_RuleType_RuleType_MIN = static_cast<Alert_RuleType>(0);
constexpr Alert_RuleType Alert_RuleType_RuleType_MAX = static_cast<Alert_RuleType>(2);
constexpr int Alert_RuleType_RuleType_ARRAYSIZE = 2 + 1;
const ::google::protobuf::EnumDescriptor*
Alert_RuleType_descriptor();
template <typename T>
const std::string& Alert_RuleType_Name(T value) {
  static_assert(std::is_same<T, Alert_RuleType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to RuleType_Name().");
  return Alert_RuleType_Name(static_cast<Alert_RuleType>(value));
}
template <>
inline const std::string& Alert_RuleType_Name(Alert_RuleType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<Alert_RuleType_descriptor,
                                                 0, 2>(
      static_cast<int>(value));
}
inline bool Alert_RuleType_Parse(absl::string_view name, Alert_RuleType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Alert_RuleType>(
      Alert_RuleType_descriptor(), name, value);
}
enum Result_ResultType : int {
  Result_ResultType_RES_OK = 0,
  Result_ResultType_RES_ERR = 1,
  Result_ResultType_Result_ResultType_INT_MIN_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::min(),
  Result_ResultType_Result_ResultType_INT_MAX_SENTINEL_DO_NOT_USE_ =
      std::numeric_limits<::int32_t>::max(),
};

bool Result_ResultType_IsValid(int value);
extern const uint32_t Result_ResultType_internal_data_[];
constexpr Result_ResultType Result_ResultType_ResultType_MIN = static_cast<Result_ResultType>(0);
constexpr Result_ResultType Result_ResultType_ResultType_MAX = static_cast<Result_ResultType>(1);
constexpr int Result_ResultType_ResultType_ARRAYSIZE = 1 + 1;
const ::google::protobuf::EnumDescriptor*
Result_ResultType_descriptor();
template <typename T>
const std::string& Result_ResultType_Name(T value) {
  static_assert(std::is_same<T, Result_ResultType>::value ||
                    std::is_integral<T>::value,
                "Incorrect type passed to ResultType_Name().");
  return Result_ResultType_Name(static_cast<Result_ResultType>(value));
}
template <>
inline const std::string& Result_ResultType_Name(Result_ResultType value) {
  return ::google::protobuf::internal::NameOfDenseEnum<Result_ResultType_descriptor,
                                                 0, 1>(
      static_cast<int>(value));
}
inline bool Result_ResultType_Parse(absl::string_view name, Result_ResultType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Result_ResultType>(
      Result_ResultType_descriptor(), name, value);
}

// ===================================================================


// -------------------------------------------------------------------

class Result final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:alerts.Result) */ {
 public:
  inline Result() : Result(nullptr) {}
  ~Result() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Result(::google::protobuf::internal::ConstantInitialized);

  inline Result(const Result& from)
      : Result(nullptr, from) {}
  Result(Result&& from) noexcept
    : Result() {
    *this = ::std::move(from);
  }

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }
  inline Result& operator=(Result&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Result& default_instance() {
    return *internal_default_instance();
  }
  static inline const Result* internal_default_instance() {
    return reinterpret_cast<const Result*>(
               &_Result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Result& a, Result& b) {
    a.Swap(&b);
  }
  inline void Swap(Result* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Result* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Result* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Result>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Result& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Result& from) {
    Result::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Result* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "alerts.Result";
  }
  protected:
  explicit Result(::google::protobuf::Arena* arena);
  Result(::google::protobuf::Arena* arena, const Result& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using ResultType = Result_ResultType;
  static constexpr ResultType RES_OK = Result_ResultType_RES_OK;
  static constexpr ResultType RES_ERR = Result_ResultType_RES_ERR;
  static inline bool ResultType_IsValid(int value) {
    return Result_ResultType_IsValid(value);
  }
  static constexpr ResultType ResultType_MIN = Result_ResultType_ResultType_MIN;
  static constexpr ResultType ResultType_MAX = Result_ResultType_ResultType_MAX;
  static constexpr int ResultType_ARRAYSIZE = Result_ResultType_ResultType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor* ResultType_descriptor() {
    return Result_ResultType_descriptor();
  }
  template <typename T>
  static inline const std::string& ResultType_Name(T value) {
    return Result_ResultType_Name(value);
  }
  static inline bool ResultType_Parse(absl::string_view name, ResultType* value) {
    return Result_ResultType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kResTypeFieldNumber = 1,
  };
  // .alerts.Result.ResultType res_type = 1;
  void clear_res_type() ;
  ::alerts::Result_ResultType res_type() const;
  void set_res_type(::alerts::Result_ResultType value);

  private:
  ::alerts::Result_ResultType _internal_res_type() const;
  void _internal_set_res_type(::alerts::Result_ResultType value);

  public:
  // @@protoc_insertion_point(class_scope:alerts.Result)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 0,
      0, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    int res_type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_alert_2eproto;
};// -------------------------------------------------------------------

class Alert final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:alerts.Alert) */ {
 public:
  inline Alert() : Alert(nullptr) {}
  ~Alert() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR Alert(::google::protobuf::internal::ConstantInitialized);

  inline Alert(const Alert& from)
      : Alert(nullptr, from) {}
  Alert(Alert&& from) noexcept
    : Alert() {
    *this = ::std::move(from);
  }

  inline Alert& operator=(const Alert& from) {
    CopyFrom(from);
    return *this;
  }
  inline Alert& operator=(Alert&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Alert& default_instance() {
    return *internal_default_instance();
  }
  static inline const Alert* internal_default_instance() {
    return reinterpret_cast<const Alert*>(
               &_Alert_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Alert& a, Alert& b) {
    a.Swap(&b);
  }
  inline void Swap(Alert* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Alert* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Alert* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Alert>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Alert& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const Alert& from) {
    Alert::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(Alert* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "alerts.Alert";
  }
  protected:
  explicit Alert(::google::protobuf::Arena* arena);
  Alert(::google::protobuf::Arena* arena, const Alert& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  using RuleType = Alert_RuleType;
  static constexpr RuleType RULE_NOTE = Alert_RuleType_RULE_NOTE;
  static constexpr RuleType RULE_WARN = Alert_RuleType_RULE_WARN;
  static constexpr RuleType RULE_ALERT = Alert_RuleType_RULE_ALERT;
  static inline bool RuleType_IsValid(int value) {
    return Alert_RuleType_IsValid(value);
  }
  static constexpr RuleType RuleType_MIN = Alert_RuleType_RuleType_MIN;
  static constexpr RuleType RuleType_MAX = Alert_RuleType_RuleType_MAX;
  static constexpr int RuleType_ARRAYSIZE = Alert_RuleType_RuleType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor* RuleType_descriptor() {
    return Alert_RuleType_descriptor();
  }
  template <typename T>
  static inline const std::string& RuleType_Name(T value) {
    return Alert_RuleType_Name(value);
  }
  static inline bool RuleType_Parse(absl::string_view name, RuleType* value) {
    return Alert_RuleType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDIpFieldNumber = 1,
    kSrcIpFieldNumber = 2,
    kDateFieldNumber = 4,
    kRuleNameFieldNumber = 5,
    kRuleTypeFieldNumber = 3,
  };
  // string d_ip = 1;
  void clear_d_ip() ;
  const std::string& d_ip() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_d_ip(Arg_&& arg, Args_... args);
  std::string* mutable_d_ip();
  PROTOBUF_NODISCARD std::string* release_d_ip();
  void set_allocated_d_ip(std::string* value);

  private:
  const std::string& _internal_d_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_d_ip(
      const std::string& value);
  std::string* _internal_mutable_d_ip();

  public:
  // string src_ip = 2;
  void clear_src_ip() ;
  const std::string& src_ip() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_src_ip(Arg_&& arg, Args_... args);
  std::string* mutable_src_ip();
  PROTOBUF_NODISCARD std::string* release_src_ip();
  void set_allocated_src_ip(std::string* value);

  private:
  const std::string& _internal_src_ip() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_src_ip(
      const std::string& value);
  std::string* _internal_mutable_src_ip();

  public:
  // string date = 4;
  void clear_date() ;
  const std::string& date() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_date(Arg_&& arg, Args_... args);
  std::string* mutable_date();
  PROTOBUF_NODISCARD std::string* release_date();
  void set_allocated_date(std::string* value);

  private:
  const std::string& _internal_date() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_date(
      const std::string& value);
  std::string* _internal_mutable_date();

  public:
  // string rule_name = 5;
  void clear_rule_name() ;
  const std::string& rule_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_rule_name(Arg_&& arg, Args_... args);
  std::string* mutable_rule_name();
  PROTOBUF_NODISCARD std::string* release_rule_name();
  void set_allocated_rule_name(std::string* value);

  private:
  const std::string& _internal_rule_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_rule_name(
      const std::string& value);
  std::string* _internal_mutable_rule_name();

  public:
  // .alerts.Alert.RuleType rule_type = 3;
  void clear_rule_type() ;
  ::alerts::Alert_RuleType rule_type() const;
  void set_rule_type(::alerts::Alert_RuleType value);

  private:
  ::alerts::Alert_RuleType _internal_rule_type() const;
  void _internal_set_rule_type(::alerts::Alert_RuleType value);

  public:
  // @@protoc_insertion_point(class_scope:alerts.Alert)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      44, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::internal::ArenaStringPtr d_ip_;
    ::google::protobuf::internal::ArenaStringPtr src_ip_;
    ::google::protobuf::internal::ArenaStringPtr date_;
    ::google::protobuf::internal::ArenaStringPtr rule_name_;
    int rule_type_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_alert_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Alert

// string d_ip = 1;
inline void Alert::clear_d_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.d_ip_.ClearToEmpty();
}
inline const std::string& Alert::d_ip() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:alerts.Alert.d_ip)
  return _internal_d_ip();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Alert::set_d_ip(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.d_ip_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:alerts.Alert.d_ip)
}
inline std::string* Alert::mutable_d_ip() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_d_ip();
  // @@protoc_insertion_point(field_mutable:alerts.Alert.d_ip)
  return _s;
}
inline const std::string& Alert::_internal_d_ip() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.d_ip_.Get();
}
inline void Alert::_internal_set_d_ip(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.d_ip_.Set(value, GetArena());
}
inline std::string* Alert::_internal_mutable_d_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.d_ip_.Mutable( GetArena());
}
inline std::string* Alert::release_d_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:alerts.Alert.d_ip)
  return _impl_.d_ip_.Release();
}
inline void Alert::set_allocated_d_ip(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.d_ip_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.d_ip_.IsDefault()) {
          _impl_.d_ip_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:alerts.Alert.d_ip)
}

// string src_ip = 2;
inline void Alert::clear_src_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.src_ip_.ClearToEmpty();
}
inline const std::string& Alert::src_ip() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:alerts.Alert.src_ip)
  return _internal_src_ip();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Alert::set_src_ip(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.src_ip_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:alerts.Alert.src_ip)
}
inline std::string* Alert::mutable_src_ip() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_src_ip();
  // @@protoc_insertion_point(field_mutable:alerts.Alert.src_ip)
  return _s;
}
inline const std::string& Alert::_internal_src_ip() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.src_ip_.Get();
}
inline void Alert::_internal_set_src_ip(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.src_ip_.Set(value, GetArena());
}
inline std::string* Alert::_internal_mutable_src_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.src_ip_.Mutable( GetArena());
}
inline std::string* Alert::release_src_ip() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:alerts.Alert.src_ip)
  return _impl_.src_ip_.Release();
}
inline void Alert::set_allocated_src_ip(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.src_ip_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.src_ip_.IsDefault()) {
          _impl_.src_ip_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:alerts.Alert.src_ip)
}

// .alerts.Alert.RuleType rule_type = 3;
inline void Alert::clear_rule_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.rule_type_ = 0;
}
inline ::alerts::Alert_RuleType Alert::rule_type() const {
  // @@protoc_insertion_point(field_get:alerts.Alert.rule_type)
  return _internal_rule_type();
}
inline void Alert::set_rule_type(::alerts::Alert_RuleType value) {
  _internal_set_rule_type(value);
  // @@protoc_insertion_point(field_set:alerts.Alert.rule_type)
}
inline ::alerts::Alert_RuleType Alert::_internal_rule_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::alerts::Alert_RuleType>(_impl_.rule_type_);
}
inline void Alert::_internal_set_rule_type(::alerts::Alert_RuleType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.rule_type_ = value;
}

// string date = 4;
inline void Alert::clear_date() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.date_.ClearToEmpty();
}
inline const std::string& Alert::date() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:alerts.Alert.date)
  return _internal_date();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Alert::set_date(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.date_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:alerts.Alert.date)
}
inline std::string* Alert::mutable_date() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_date();
  // @@protoc_insertion_point(field_mutable:alerts.Alert.date)
  return _s;
}
inline const std::string& Alert::_internal_date() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.date_.Get();
}
inline void Alert::_internal_set_date(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.date_.Set(value, GetArena());
}
inline std::string* Alert::_internal_mutable_date() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.date_.Mutable( GetArena());
}
inline std::string* Alert::release_date() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:alerts.Alert.date)
  return _impl_.date_.Release();
}
inline void Alert::set_allocated_date(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.date_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.date_.IsDefault()) {
          _impl_.date_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:alerts.Alert.date)
}

// string rule_name = 5;
inline void Alert::clear_rule_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.rule_name_.ClearToEmpty();
}
inline const std::string& Alert::rule_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:alerts.Alert.rule_name)
  return _internal_rule_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Alert::set_rule_name(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.rule_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:alerts.Alert.rule_name)
}
inline std::string* Alert::mutable_rule_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_rule_name();
  // @@protoc_insertion_point(field_mutable:alerts.Alert.rule_name)
  return _s;
}
inline const std::string& Alert::_internal_rule_name() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.rule_name_.Get();
}
inline void Alert::_internal_set_rule_name(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.rule_name_.Set(value, GetArena());
}
inline std::string* Alert::_internal_mutable_rule_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.rule_name_.Mutable( GetArena());
}
inline std::string* Alert::release_rule_name() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:alerts.Alert.rule_name)
  return _impl_.rule_name_.Release();
}
inline void Alert::set_allocated_rule_name(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.rule_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.rule_name_.IsDefault()) {
          _impl_.rule_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:alerts.Alert.rule_name)
}

// -------------------------------------------------------------------

// Result

// .alerts.Result.ResultType res_type = 1;
inline void Result::clear_res_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.res_type_ = 0;
}
inline ::alerts::Result_ResultType Result::res_type() const {
  // @@protoc_insertion_point(field_get:alerts.Result.res_type)
  return _internal_res_type();
}
inline void Result::set_res_type(::alerts::Result_ResultType value) {
  _internal_set_res_type(value);
  // @@protoc_insertion_point(field_set:alerts.Result.res_type)
}
inline ::alerts::Result_ResultType Result::_internal_res_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return static_cast<::alerts::Result_ResultType>(_impl_.res_type_);
}
inline void Result::_internal_set_res_type(::alerts::Result_ResultType value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.res_type_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace alerts


namespace google {
namespace protobuf {

template <>
struct is_proto_enum<::alerts::Alert_RuleType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::alerts::Alert_RuleType>() {
  return ::alerts::Alert_RuleType_descriptor();
}
template <>
struct is_proto_enum<::alerts::Result_ResultType> : std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor<::alerts::Result_ResultType>() {
  return ::alerts::Result_ResultType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_alert_2eproto_2epb_2eh

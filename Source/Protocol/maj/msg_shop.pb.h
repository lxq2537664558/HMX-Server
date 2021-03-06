// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_shop.proto

#ifndef PROTOBUF_msg_5fshop_2eproto__INCLUDED
#define PROTOBUF_msg_5fshop_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace msg_maj {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_msg_5fshop_2eproto();
void protobuf_AssignDesc_msg_5fshop_2eproto();
void protobuf_ShutdownFile_msg_5fshop_2eproto();

class WxPayOrderInfoReq;

enum c_cmd_shop {
  wxpayorderinfo_req = 1,
  wxpayorderinfo_resp = 2
};
bool c_cmd_shop_IsValid(int value);
const c_cmd_shop c_cmd_shop_MIN = wxpayorderinfo_req;
const c_cmd_shop c_cmd_shop_MAX = wxpayorderinfo_resp;
const int c_cmd_shop_ARRAYSIZE = c_cmd_shop_MAX + 1;

const ::google::protobuf::EnumDescriptor* c_cmd_shop_descriptor();
inline const ::std::string& c_cmd_shop_Name(c_cmd_shop value) {
  return ::google::protobuf::internal::NameOfEnum(
    c_cmd_shop_descriptor(), value);
}
inline bool c_cmd_shop_Parse(
    const ::std::string& name, c_cmd_shop* value) {
  return ::google::protobuf::internal::ParseNamedEnum<c_cmd_shop>(
    c_cmd_shop_descriptor(), name, value);
}
// ===================================================================

class WxPayOrderInfoReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:msg_maj.WxPayOrderInfoReq) */ {
 public:
  WxPayOrderInfoReq();
  virtual ~WxPayOrderInfoReq();

  WxPayOrderInfoReq(const WxPayOrderInfoReq& from);

  inline WxPayOrderInfoReq& operator=(const WxPayOrderInfoReq& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const WxPayOrderInfoReq& default_instance();

  void Swap(WxPayOrderInfoReq* other);

  // implements Message ----------------------------------------------

  inline WxPayOrderInfoReq* New() const { return New(NULL); }

  WxPayOrderInfoReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WxPayOrderInfoReq& from);
  void MergeFrom(const WxPayOrderInfoReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(WxPayOrderInfoReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 sound = 1;
  bool has_sound() const;
  void clear_sound();
  static const int kSoundFieldNumber = 1;
  ::google::protobuf::uint32 sound() const;
  void set_sound(::google::protobuf::uint32 value);

  // required uint32 music = 2;
  bool has_music() const;
  void clear_music();
  static const int kMusicFieldNumber = 2;
  ::google::protobuf::uint32 music() const;
  void set_music(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:msg_maj.WxPayOrderInfoReq)
 private:
  inline void set_has_sound();
  inline void clear_has_sound();
  inline void set_has_music();
  inline void clear_has_music();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 sound_;
  ::google::protobuf::uint32 music_;
  friend void  protobuf_AddDesc_msg_5fshop_2eproto();
  friend void protobuf_AssignDesc_msg_5fshop_2eproto();
  friend void protobuf_ShutdownFile_msg_5fshop_2eproto();

  void InitAsDefaultInstance();
  static WxPayOrderInfoReq* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WxPayOrderInfoReq

// required uint32 sound = 1;
inline bool WxPayOrderInfoReq::has_sound() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WxPayOrderInfoReq::set_has_sound() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WxPayOrderInfoReq::clear_has_sound() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WxPayOrderInfoReq::clear_sound() {
  sound_ = 0u;
  clear_has_sound();
}
inline ::google::protobuf::uint32 WxPayOrderInfoReq::sound() const {
  // @@protoc_insertion_point(field_get:msg_maj.WxPayOrderInfoReq.sound)
  return sound_;
}
inline void WxPayOrderInfoReq::set_sound(::google::protobuf::uint32 value) {
  set_has_sound();
  sound_ = value;
  // @@protoc_insertion_point(field_set:msg_maj.WxPayOrderInfoReq.sound)
}

// required uint32 music = 2;
inline bool WxPayOrderInfoReq::has_music() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WxPayOrderInfoReq::set_has_music() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WxPayOrderInfoReq::clear_has_music() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WxPayOrderInfoReq::clear_music() {
  music_ = 0u;
  clear_has_music();
}
inline ::google::protobuf::uint32 WxPayOrderInfoReq::music() const {
  // @@protoc_insertion_point(field_get:msg_maj.WxPayOrderInfoReq.music)
  return music_;
}
inline void WxPayOrderInfoReq::set_music(::google::protobuf::uint32 value) {
  set_has_music();
  music_ = value;
  // @@protoc_insertion_point(field_set:msg_maj.WxPayOrderInfoReq.music)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msg_maj

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::msg_maj::c_cmd_shop> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::msg_maj::c_cmd_shop>() {
  return ::msg_maj::c_cmd_shop_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_msg_5fshop_2eproto__INCLUDED

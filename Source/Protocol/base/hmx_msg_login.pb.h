// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hmx_msg_login.proto

#ifndef PROTOBUF_hmx_5fmsg_5flogin_2eproto__INCLUDED
#define PROTOBUF_hmx_5fmsg_5flogin_2eproto__INCLUDED

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
#include "hmx_config.pb.h"
// @@protoc_insertion_point(includes)

namespace hmx_msg_login {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

class LoginReq;
class LoginResp;
class PingServerClientProto;
class SerivceListResp;
class users;

enum hmx_c_cmd {
  login_req = 100,
  login_resp = 200,
  ping_req = 300,
  ping_resp = 301,
  srvlist_notify = 400
};
bool hmx_c_cmd_IsValid(int value);
const hmx_c_cmd hmx_c_cmd_MIN = login_req;
const hmx_c_cmd hmx_c_cmd_MAX = srvlist_notify;
const int hmx_c_cmd_ARRAYSIZE = hmx_c_cmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* hmx_c_cmd_descriptor();
inline const ::std::string& hmx_c_cmd_Name(hmx_c_cmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    hmx_c_cmd_descriptor(), value);
}
inline bool hmx_c_cmd_Parse(
    const ::std::string& name, hmx_c_cmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<hmx_c_cmd>(
    hmx_c_cmd_descriptor(), name, value);
}
enum LoginResult {
  login_r_success = 0,
  login_r_fail = 1
};
bool LoginResult_IsValid(int value);
const LoginResult LoginResult_MIN = login_r_success;
const LoginResult LoginResult_MAX = login_r_fail;
const int LoginResult_ARRAYSIZE = LoginResult_MAX + 1;

const ::google::protobuf::EnumDescriptor* LoginResult_descriptor();
inline const ::std::string& LoginResult_Name(LoginResult value) {
  return ::google::protobuf::internal::NameOfEnum(
    LoginResult_descriptor(), value);
}
inline bool LoginResult_Parse(
    const ::std::string& name, LoginResult* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LoginResult>(
    LoginResult_descriptor(), name, value);
}
enum client_status {
  client_s_inited = 0,
  client_s_connected = 1,
  client_s_encrypted = 2,
  client_s_notify_inited = 3,
  client_s_logined = 4,
  client_s_selected = 5,
  client_s_in_world = 6,
  client_s_in_scene = 7
};
bool client_status_IsValid(int value);
const client_status client_status_MIN = client_s_inited;
const client_status client_status_MAX = client_s_in_scene;
const int client_status_ARRAYSIZE = client_status_MAX + 1;

const ::google::protobuf::EnumDescriptor* client_status_descriptor();
inline const ::std::string& client_status_Name(client_status value) {
  return ::google::protobuf::internal::NameOfEnum(
    client_status_descriptor(), value);
}
inline bool client_status_Parse(
    const ::std::string& name, client_status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<client_status>(
    client_status_descriptor(), name, value);
}
// ===================================================================

class LoginReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hmx_msg_login.LoginReq) */ {
 public:
  LoginReq();
  virtual ~LoginReq();

  LoginReq(const LoginReq& from);

  inline LoginReq& operator=(const LoginReq& from) {
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
  static const LoginReq& default_instance();

  void Swap(LoginReq* other);

  // implements Message ----------------------------------------------

  inline LoginReq* New() const { return New(NULL); }

  LoginReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginReq& from);
  void MergeFrom(const LoginReq& from);
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
  void InternalSwap(LoginReq* other);
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

  // optional .config.ServerInfo server_info = 1;
  bool has_server_info() const;
  void clear_server_info();
  static const int kServerInfoFieldNumber = 1;
  const ::config::ServerInfo& server_info() const;
  ::config::ServerInfo* mutable_server_info();
  ::config::ServerInfo* release_server_info();
  void set_allocated_server_info(::config::ServerInfo* server_info);

  // repeated .config.SerivceInfo broad_serivce_list = 2;
  int broad_serivce_list_size() const;
  void clear_broad_serivce_list();
  static const int kBroadSerivceListFieldNumber = 2;
  const ::config::SerivceInfo& broad_serivce_list(int index) const;
  ::config::SerivceInfo* mutable_broad_serivce_list(int index);
  ::config::SerivceInfo* add_broad_serivce_list();
  ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >*
      mutable_broad_serivce_list();
  const ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >&
      broad_serivce_list() const;

  // @@protoc_insertion_point(class_scope:hmx_msg_login.LoginReq)
 private:
  inline void set_has_server_info();
  inline void clear_has_server_info();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::config::ServerInfo* server_info_;
  ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo > broad_serivce_list_;
  friend void  protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

  void InitAsDefaultInstance();
  static LoginReq* default_instance_;
};
// -------------------------------------------------------------------

class PingServerClientProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hmx_msg_login.PingServerClientProto) */ {
 public:
  PingServerClientProto();
  virtual ~PingServerClientProto();

  PingServerClientProto(const PingServerClientProto& from);

  inline PingServerClientProto& operator=(const PingServerClientProto& from) {
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
  static const PingServerClientProto& default_instance();

  void Swap(PingServerClientProto* other);

  // implements Message ----------------------------------------------

  inline PingServerClientProto* New() const { return New(NULL); }

  PingServerClientProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PingServerClientProto& from);
  void MergeFrom(const PingServerClientProto& from);
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
  void InternalSwap(PingServerClientProto* other);
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

  // optional uint64 time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  ::google::protobuf::uint64 time() const;
  void set_time(::google::protobuf::uint64 value);

  // optional uint32 from_server_id = 2;
  bool has_from_server_id() const;
  void clear_from_server_id();
  static const int kFromServerIdFieldNumber = 2;
  ::google::protobuf::uint32 from_server_id() const;
  void set_from_server_id(::google::protobuf::uint32 value);

  // optional uint32 to_server_id = 3;
  bool has_to_server_id() const;
  void clear_to_server_id();
  static const int kToServerIdFieldNumber = 3;
  ::google::protobuf::uint32 to_server_id() const;
  void set_to_server_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:hmx_msg_login.PingServerClientProto)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_from_server_id();
  inline void clear_has_from_server_id();
  inline void set_has_to_server_id();
  inline void clear_has_to_server_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 time_;
  ::google::protobuf::uint32 from_server_id_;
  ::google::protobuf::uint32 to_server_id_;
  friend void  protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

  void InitAsDefaultInstance();
  static PingServerClientProto* default_instance_;
};
// -------------------------------------------------------------------

class LoginResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hmx_msg_login.LoginResp) */ {
 public:
  LoginResp();
  virtual ~LoginResp();

  LoginResp(const LoginResp& from);

  inline LoginResp& operator=(const LoginResp& from) {
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
  static const LoginResp& default_instance();

  void Swap(LoginResp* other);

  // implements Message ----------------------------------------------

  inline LoginResp* New() const { return New(NULL); }

  LoginResp* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginResp& from);
  void MergeFrom(const LoginResp& from);
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
  void InternalSwap(LoginResp* other);
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

  // optional .hmx_msg_login.LoginResult result = 1;
  bool has_result() const;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::hmx_msg_login::LoginResult result() const;
  void set_result(::hmx_msg_login::LoginResult value);

  // optional int32 server_id = 2;
  bool has_server_id() const;
  void clear_server_id();
  static const int kServerIdFieldNumber = 2;
  ::google::protobuf::int32 server_id() const;
  void set_server_id(::google::protobuf::int32 value);

  // optional int32 server_type = 3;
  bool has_server_type() const;
  void clear_server_type();
  static const int kServerTypeFieldNumber = 3;
  ::google::protobuf::int32 server_type() const;
  void set_server_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hmx_msg_login.LoginResp)
 private:
  inline void set_has_result();
  inline void clear_has_result();
  inline void set_has_server_id();
  inline void clear_has_server_id();
  inline void set_has_server_type();
  inline void clear_has_server_type();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  int result_;
  ::google::protobuf::int32 server_id_;
  ::google::protobuf::int32 server_type_;
  friend void  protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

  void InitAsDefaultInstance();
  static LoginResp* default_instance_;
};
// -------------------------------------------------------------------

class SerivceListResp : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hmx_msg_login.SerivceListResp) */ {
 public:
  SerivceListResp();
  virtual ~SerivceListResp();

  SerivceListResp(const SerivceListResp& from);

  inline SerivceListResp& operator=(const SerivceListResp& from) {
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
  static const SerivceListResp& default_instance();

  void Swap(SerivceListResp* other);

  // implements Message ----------------------------------------------

  inline SerivceListResp* New() const { return New(NULL); }

  SerivceListResp* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SerivceListResp& from);
  void MergeFrom(const SerivceListResp& from);
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
  void InternalSwap(SerivceListResp* other);
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

  // repeated .config.SerivceInfo serivce_list = 1;
  int serivce_list_size() const;
  void clear_serivce_list();
  static const int kSerivceListFieldNumber = 1;
  const ::config::SerivceInfo& serivce_list(int index) const;
  ::config::SerivceInfo* mutable_serivce_list(int index);
  ::config::SerivceInfo* add_serivce_list();
  ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >*
      mutable_serivce_list();
  const ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >&
      serivce_list() const;

  // @@protoc_insertion_point(class_scope:hmx_msg_login.SerivceListResp)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo > serivce_list_;
  friend void  protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

  void InitAsDefaultInstance();
  static SerivceListResp* default_instance_;
};
// -------------------------------------------------------------------

class users : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hmx_msg_login.users) */ {
 public:
  users();
  virtual ~users();

  users(const users& from);

  inline users& operator=(const users& from) {
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
  static const users& default_instance();

  void Swap(users* other);

  // implements Message ----------------------------------------------

  inline users* New() const { return New(NULL); }

  users* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const users& from);
  void MergeFrom(const users& from);
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
  void InternalSwap(users* other);
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

  // optional uint32 uid = 1;
  bool has_uid() const;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::uint32 uid() const;
  void set_uid(::google::protobuf::uint32 value);

  // optional string username = 2;
  bool has_username() const;
  void clear_username();
  static const int kUsernameFieldNumber = 2;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // optional string avatar = 3;
  bool has_avatar() const;
  void clear_avatar();
  static const int kAvatarFieldNumber = 3;
  const ::std::string& avatar() const;
  void set_avatar(const ::std::string& value);
  void set_avatar(const char* value);
  void set_avatar(const char* value, size_t size);
  ::std::string* mutable_avatar();
  ::std::string* release_avatar();
  void set_allocated_avatar(::std::string* avatar);

  // @@protoc_insertion_point(class_scope:hmx_msg_login.users)
 private:
  inline void set_has_uid();
  inline void clear_has_uid();
  inline void set_has_username();
  inline void clear_has_username();
  inline void set_has_avatar();
  inline void clear_has_avatar();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr avatar_;
  ::google::protobuf::uint32 uid_;
  friend void  protobuf_AddDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_AssignDesc_hmx_5fmsg_5flogin_2eproto();
  friend void protobuf_ShutdownFile_hmx_5fmsg_5flogin_2eproto();

  void InitAsDefaultInstance();
  static users* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginReq

// optional .config.ServerInfo server_info = 1;
inline bool LoginReq::has_server_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginReq::set_has_server_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginReq::clear_has_server_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginReq::clear_server_info() {
  if (server_info_ != NULL) server_info_->::config::ServerInfo::Clear();
  clear_has_server_info();
}
inline const ::config::ServerInfo& LoginReq::server_info() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.LoginReq.server_info)
  return server_info_ != NULL ? *server_info_ : *default_instance_->server_info_;
}
inline ::config::ServerInfo* LoginReq::mutable_server_info() {
  set_has_server_info();
  if (server_info_ == NULL) {
    server_info_ = new ::config::ServerInfo;
  }
  // @@protoc_insertion_point(field_mutable:hmx_msg_login.LoginReq.server_info)
  return server_info_;
}
inline ::config::ServerInfo* LoginReq::release_server_info() {
  // @@protoc_insertion_point(field_release:hmx_msg_login.LoginReq.server_info)
  clear_has_server_info();
  ::config::ServerInfo* temp = server_info_;
  server_info_ = NULL;
  return temp;
}
inline void LoginReq::set_allocated_server_info(::config::ServerInfo* server_info) {
  delete server_info_;
  server_info_ = server_info;
  if (server_info) {
    set_has_server_info();
  } else {
    clear_has_server_info();
  }
  // @@protoc_insertion_point(field_set_allocated:hmx_msg_login.LoginReq.server_info)
}

// repeated .config.SerivceInfo broad_serivce_list = 2;
inline int LoginReq::broad_serivce_list_size() const {
  return broad_serivce_list_.size();
}
inline void LoginReq::clear_broad_serivce_list() {
  broad_serivce_list_.Clear();
}
inline const ::config::SerivceInfo& LoginReq::broad_serivce_list(int index) const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.LoginReq.broad_serivce_list)
  return broad_serivce_list_.Get(index);
}
inline ::config::SerivceInfo* LoginReq::mutable_broad_serivce_list(int index) {
  // @@protoc_insertion_point(field_mutable:hmx_msg_login.LoginReq.broad_serivce_list)
  return broad_serivce_list_.Mutable(index);
}
inline ::config::SerivceInfo* LoginReq::add_broad_serivce_list() {
  // @@protoc_insertion_point(field_add:hmx_msg_login.LoginReq.broad_serivce_list)
  return broad_serivce_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >*
LoginReq::mutable_broad_serivce_list() {
  // @@protoc_insertion_point(field_mutable_list:hmx_msg_login.LoginReq.broad_serivce_list)
  return &broad_serivce_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >&
LoginReq::broad_serivce_list() const {
  // @@protoc_insertion_point(field_list:hmx_msg_login.LoginReq.broad_serivce_list)
  return broad_serivce_list_;
}

// -------------------------------------------------------------------

// PingServerClientProto

// optional uint64 time = 1;
inline bool PingServerClientProto::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PingServerClientProto::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PingServerClientProto::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PingServerClientProto::clear_time() {
  time_ = GOOGLE_ULONGLONG(0);
  clear_has_time();
}
inline ::google::protobuf::uint64 PingServerClientProto::time() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.PingServerClientProto.time)
  return time_;
}
inline void PingServerClientProto::set_time(::google::protobuf::uint64 value) {
  set_has_time();
  time_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.PingServerClientProto.time)
}

// optional uint32 from_server_id = 2;
inline bool PingServerClientProto::has_from_server_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PingServerClientProto::set_has_from_server_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PingServerClientProto::clear_has_from_server_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PingServerClientProto::clear_from_server_id() {
  from_server_id_ = 0u;
  clear_has_from_server_id();
}
inline ::google::protobuf::uint32 PingServerClientProto::from_server_id() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.PingServerClientProto.from_server_id)
  return from_server_id_;
}
inline void PingServerClientProto::set_from_server_id(::google::protobuf::uint32 value) {
  set_has_from_server_id();
  from_server_id_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.PingServerClientProto.from_server_id)
}

// optional uint32 to_server_id = 3;
inline bool PingServerClientProto::has_to_server_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PingServerClientProto::set_has_to_server_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PingServerClientProto::clear_has_to_server_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PingServerClientProto::clear_to_server_id() {
  to_server_id_ = 0u;
  clear_has_to_server_id();
}
inline ::google::protobuf::uint32 PingServerClientProto::to_server_id() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.PingServerClientProto.to_server_id)
  return to_server_id_;
}
inline void PingServerClientProto::set_to_server_id(::google::protobuf::uint32 value) {
  set_has_to_server_id();
  to_server_id_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.PingServerClientProto.to_server_id)
}

// -------------------------------------------------------------------

// LoginResp

// optional .hmx_msg_login.LoginResult result = 1;
inline bool LoginResp::has_result() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LoginResp::set_has_result() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LoginResp::clear_has_result() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LoginResp::clear_result() {
  result_ = 0;
  clear_has_result();
}
inline ::hmx_msg_login::LoginResult LoginResp::result() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.LoginResp.result)
  return static_cast< ::hmx_msg_login::LoginResult >(result_);
}
inline void LoginResp::set_result(::hmx_msg_login::LoginResult value) {
  assert(::hmx_msg_login::LoginResult_IsValid(value));
  set_has_result();
  result_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.LoginResp.result)
}

// optional int32 server_id = 2;
inline bool LoginResp::has_server_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LoginResp::set_has_server_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LoginResp::clear_has_server_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LoginResp::clear_server_id() {
  server_id_ = 0;
  clear_has_server_id();
}
inline ::google::protobuf::int32 LoginResp::server_id() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.LoginResp.server_id)
  return server_id_;
}
inline void LoginResp::set_server_id(::google::protobuf::int32 value) {
  set_has_server_id();
  server_id_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.LoginResp.server_id)
}

// optional int32 server_type = 3;
inline bool LoginResp::has_server_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LoginResp::set_has_server_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LoginResp::clear_has_server_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LoginResp::clear_server_type() {
  server_type_ = 0;
  clear_has_server_type();
}
inline ::google::protobuf::int32 LoginResp::server_type() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.LoginResp.server_type)
  return server_type_;
}
inline void LoginResp::set_server_type(::google::protobuf::int32 value) {
  set_has_server_type();
  server_type_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.LoginResp.server_type)
}

// -------------------------------------------------------------------

// SerivceListResp

// repeated .config.SerivceInfo serivce_list = 1;
inline int SerivceListResp::serivce_list_size() const {
  return serivce_list_.size();
}
inline void SerivceListResp::clear_serivce_list() {
  serivce_list_.Clear();
}
inline const ::config::SerivceInfo& SerivceListResp::serivce_list(int index) const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.SerivceListResp.serivce_list)
  return serivce_list_.Get(index);
}
inline ::config::SerivceInfo* SerivceListResp::mutable_serivce_list(int index) {
  // @@protoc_insertion_point(field_mutable:hmx_msg_login.SerivceListResp.serivce_list)
  return serivce_list_.Mutable(index);
}
inline ::config::SerivceInfo* SerivceListResp::add_serivce_list() {
  // @@protoc_insertion_point(field_add:hmx_msg_login.SerivceListResp.serivce_list)
  return serivce_list_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >*
SerivceListResp::mutable_serivce_list() {
  // @@protoc_insertion_point(field_mutable_list:hmx_msg_login.SerivceListResp.serivce_list)
  return &serivce_list_;
}
inline const ::google::protobuf::RepeatedPtrField< ::config::SerivceInfo >&
SerivceListResp::serivce_list() const {
  // @@protoc_insertion_point(field_list:hmx_msg_login.SerivceListResp.serivce_list)
  return serivce_list_;
}

// -------------------------------------------------------------------

// users

// optional uint32 uid = 1;
inline bool users::has_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void users::set_has_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void users::clear_has_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void users::clear_uid() {
  uid_ = 0u;
  clear_has_uid();
}
inline ::google::protobuf::uint32 users::uid() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.users.uid)
  return uid_;
}
inline void users::set_uid(::google::protobuf::uint32 value) {
  set_has_uid();
  uid_ = value;
  // @@protoc_insertion_point(field_set:hmx_msg_login.users.uid)
}

// optional string username = 2;
inline bool users::has_username() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void users::set_has_username() {
  _has_bits_[0] |= 0x00000002u;
}
inline void users::clear_has_username() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void users::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_username();
}
inline const ::std::string& users::username() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.users.username)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void users::set_username(const ::std::string& value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hmx_msg_login.users.username)
}
inline void users::set_username(const char* value) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hmx_msg_login.users.username)
}
inline void users::set_username(const char* value, size_t size) {
  set_has_username();
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hmx_msg_login.users.username)
}
inline ::std::string* users::mutable_username() {
  set_has_username();
  // @@protoc_insertion_point(field_mutable:hmx_msg_login.users.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* users::release_username() {
  // @@protoc_insertion_point(field_release:hmx_msg_login.users.username)
  clear_has_username();
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void users::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    set_has_username();
  } else {
    clear_has_username();
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:hmx_msg_login.users.username)
}

// optional string avatar = 3;
inline bool users::has_avatar() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void users::set_has_avatar() {
  _has_bits_[0] |= 0x00000004u;
}
inline void users::clear_has_avatar() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void users::clear_avatar() {
  avatar_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_avatar();
}
inline const ::std::string& users::avatar() const {
  // @@protoc_insertion_point(field_get:hmx_msg_login.users.avatar)
  return avatar_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void users::set_avatar(const ::std::string& value) {
  set_has_avatar();
  avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hmx_msg_login.users.avatar)
}
inline void users::set_avatar(const char* value) {
  set_has_avatar();
  avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hmx_msg_login.users.avatar)
}
inline void users::set_avatar(const char* value, size_t size) {
  set_has_avatar();
  avatar_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hmx_msg_login.users.avatar)
}
inline ::std::string* users::mutable_avatar() {
  set_has_avatar();
  // @@protoc_insertion_point(field_mutable:hmx_msg_login.users.avatar)
  return avatar_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* users::release_avatar() {
  // @@protoc_insertion_point(field_release:hmx_msg_login.users.avatar)
  clear_has_avatar();
  return avatar_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void users::set_allocated_avatar(::std::string* avatar) {
  if (avatar != NULL) {
    set_has_avatar();
  } else {
    clear_has_avatar();
  }
  avatar_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), avatar);
  // @@protoc_insertion_point(field_set_allocated:hmx_msg_login.users.avatar)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace hmx_msg_login

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::hmx_msg_login::hmx_c_cmd> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hmx_msg_login::hmx_c_cmd>() {
  return ::hmx_msg_login::hmx_c_cmd_descriptor();
}
template <> struct is_proto_enum< ::hmx_msg_login::LoginResult> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hmx_msg_login::LoginResult>() {
  return ::hmx_msg_login::LoginResult_descriptor();
}
template <> struct is_proto_enum< ::hmx_msg_login::client_status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hmx_msg_login::client_status>() {
  return ::hmx_msg_login::client_status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_hmx_5fmsg_5flogin_2eproto__INCLUDED

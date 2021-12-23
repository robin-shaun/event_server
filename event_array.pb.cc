// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: event_array.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "event_array.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace event_array {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* Event_Array_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Event_Array_reflection_ = NULL;
const ::google::protobuf::Descriptor* Event_Array_Event_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Event_Array_Event_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_event_5farray_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_event_5farray_2eproto() {
  protobuf_AddDesc_event_5farray_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "event_array.proto");
  GOOGLE_CHECK(file != NULL);
  Event_Array_descriptor_ = file->message_type(0);
  static const int Event_Array_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, event_),
  };
  Event_Array_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Event_Array_descriptor_,
      Event_Array::default_instance_,
      Event_Array_offsets_,
      -1,
      -1,
      -1,
      sizeof(Event_Array),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array, _is_default_instance_));
  Event_Array_Event_descriptor_ = Event_Array_descriptor_->nested_type(0);
  static const int Event_Array_Event_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, polarity_),
  };
  Event_Array_Event_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Event_Array_Event_descriptor_,
      Event_Array_Event::default_instance_,
      Event_Array_Event_offsets_,
      -1,
      -1,
      -1,
      sizeof(Event_Array_Event),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Event_Array_Event, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_event_5farray_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Event_Array_descriptor_, &Event_Array::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Event_Array_Event_descriptor_, &Event_Array_Event::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_event_5farray_2eproto() {
  delete Event_Array::default_instance_;
  delete Event_Array_reflection_;
  delete Event_Array_Event::default_instance_;
  delete Event_Array_Event_reflection_;
}

void protobuf_AddDesc_event_5farray_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_event_5farray_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021event_array.proto\022\024event_array.protobu"
    "f\"\211\001\n\013Event_Array\0226\n\005event\030\001 \003(\0132\'.event"
    "_array.protobuf.Event_Array.Event\032B\n\005Eve"
    "nt\022\021\n\ttimestamp\030\001 \001(\001\022\t\n\001x\030\002 \001(\005\022\t\n\001y\030\003 "
    "\001(\005\022\020\n\010polarity\030\004 \001(\005B\002H\001b\006proto3", 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "event_array.proto", &protobuf_RegisterTypes);
  Event_Array::default_instance_ = new Event_Array();
  Event_Array_Event::default_instance_ = new Event_Array_Event();
  Event_Array::default_instance_->InitAsDefaultInstance();
  Event_Array_Event::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_event_5farray_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_event_5farray_2eproto {
  StaticDescriptorInitializer_event_5farray_2eproto() {
    protobuf_AddDesc_event_5farray_2eproto();
  }
} static_descriptor_initializer_event_5farray_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Event_Array_Event::kTimestampFieldNumber;
const int Event_Array_Event::kXFieldNumber;
const int Event_Array_Event::kYFieldNumber;
const int Event_Array_Event::kPolarityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Event_Array_Event::Event_Array_Event()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:event_array.protobuf.Event_Array.Event)
}

void Event_Array_Event::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Event_Array_Event::Event_Array_Event(const Event_Array_Event& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:event_array.protobuf.Event_Array.Event)
}

void Event_Array_Event::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  timestamp_ = 0;
  x_ = 0;
  y_ = 0;
  polarity_ = 0;
}

Event_Array_Event::~Event_Array_Event() {
  // @@protoc_insertion_point(destructor:event_array.protobuf.Event_Array.Event)
  SharedDtor();
}

void Event_Array_Event::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Event_Array_Event::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event_Array_Event::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_Array_Event_descriptor_;
}

const Event_Array_Event& Event_Array_Event::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_event_5farray_2eproto();
  return *default_instance_;
}

Event_Array_Event* Event_Array_Event::default_instance_ = NULL;

Event_Array_Event* Event_Array_Event::New(::google::protobuf::Arena* arena) const {
  Event_Array_Event* n = new Event_Array_Event;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Event_Array_Event::Clear() {
// @@protoc_insertion_point(message_clear_start:event_array.protobuf.Event_Array.Event)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(Event_Array_Event, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<Event_Array_Event*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(timestamp_, polarity_);

#undef ZR_HELPER_
#undef ZR_

}

bool Event_Array_Event::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:event_array.protobuf.Event_Array.Event)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double timestamp = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_x;
        break;
      }

      // optional int32 x = 2;
      case 2: {
        if (tag == 16) {
         parse_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &x_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_y;
        break;
      }

      // optional int32 y = 3;
      case 3: {
        if (tag == 24) {
         parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &y_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_polarity;
        break;
      }

      // optional int32 polarity = 4;
      case 4: {
        if (tag == 32) {
         parse_polarity:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &polarity_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:event_array.protobuf.Event_Array.Event)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:event_array.protobuf.Event_Array.Event)
  return false;
#undef DO_
}

void Event_Array_Event::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:event_array.protobuf.Event_Array.Event)
  // optional double timestamp = 1;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->timestamp(), output);
  }

  // optional int32 x = 2;
  if (this->x() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->x(), output);
  }

  // optional int32 y = 3;
  if (this->y() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->y(), output);
  }

  // optional int32 polarity = 4;
  if (this->polarity() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->polarity(), output);
  }

  // @@protoc_insertion_point(serialize_end:event_array.protobuf.Event_Array.Event)
}

::google::protobuf::uint8* Event_Array_Event::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:event_array.protobuf.Event_Array.Event)
  // optional double timestamp = 1;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->timestamp(), target);
  }

  // optional int32 x = 2;
  if (this->x() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->x(), target);
  }

  // optional int32 y = 3;
  if (this->y() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->y(), target);
  }

  // optional int32 polarity = 4;
  if (this->polarity() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->polarity(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:event_array.protobuf.Event_Array.Event)
  return target;
}

int Event_Array_Event::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:event_array.protobuf.Event_Array.Event)
  int total_size = 0;

  // optional double timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 + 8;
  }

  // optional int32 x = 2;
  if (this->x() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->x());
  }

  // optional int32 y = 3;
  if (this->y() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->y());
  }

  // optional int32 polarity = 4;
  if (this->polarity() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->polarity());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event_Array_Event::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:event_array.protobuf.Event_Array.Event)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Event_Array_Event* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Event_Array_Event>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:event_array.protobuf.Event_Array.Event)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:event_array.protobuf.Event_Array.Event)
    MergeFrom(*source);
  }
}

void Event_Array_Event::MergeFrom(const Event_Array_Event& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:event_array.protobuf.Event_Array.Event)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
  if (from.x() != 0) {
    set_x(from.x());
  }
  if (from.y() != 0) {
    set_y(from.y());
  }
  if (from.polarity() != 0) {
    set_polarity(from.polarity());
  }
}

void Event_Array_Event::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:event_array.protobuf.Event_Array.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event_Array_Event::CopyFrom(const Event_Array_Event& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:event_array.protobuf.Event_Array.Event)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event_Array_Event::IsInitialized() const {

  return true;
}

void Event_Array_Event::Swap(Event_Array_Event* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Event_Array_Event::InternalSwap(Event_Array_Event* other) {
  std::swap(timestamp_, other->timestamp_);
  std::swap(x_, other->x_);
  std::swap(y_, other->y_);
  std::swap(polarity_, other->polarity_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event_Array_Event::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Event_Array_Event_descriptor_;
  metadata.reflection = Event_Array_Event_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Event_Array::kEventFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Event_Array::Event_Array()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:event_array.protobuf.Event_Array)
}

void Event_Array::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Event_Array::Event_Array(const Event_Array& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:event_array.protobuf.Event_Array)
}

void Event_Array::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

Event_Array::~Event_Array() {
  // @@protoc_insertion_point(destructor:event_array.protobuf.Event_Array)
  SharedDtor();
}

void Event_Array::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Event_Array::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Event_Array::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Event_Array_descriptor_;
}

const Event_Array& Event_Array::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_event_5farray_2eproto();
  return *default_instance_;
}

Event_Array* Event_Array::default_instance_ = NULL;

Event_Array* Event_Array::New(::google::protobuf::Arena* arena) const {
  Event_Array* n = new Event_Array;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Event_Array::Clear() {
// @@protoc_insertion_point(message_clear_start:event_array.protobuf.Event_Array)
  event_.Clear();
}

bool Event_Array::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:event_array.protobuf.Event_Array)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .event_array.protobuf.Event_Array.Event event = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_event:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_event()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_event;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:event_array.protobuf.Event_Array)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:event_array.protobuf.Event_Array)
  return false;
#undef DO_
}

void Event_Array::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:event_array.protobuf.Event_Array)
  // repeated .event_array.protobuf.Event_Array.Event event = 1;
  for (unsigned int i = 0, n = this->event_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->event(i), output);
  }

  // @@protoc_insertion_point(serialize_end:event_array.protobuf.Event_Array)
}

::google::protobuf::uint8* Event_Array::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:event_array.protobuf.Event_Array)
  // repeated .event_array.protobuf.Event_Array.Event event = 1;
  for (unsigned int i = 0, n = this->event_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->event(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:event_array.protobuf.Event_Array)
  return target;
}

int Event_Array::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:event_array.protobuf.Event_Array)
  int total_size = 0;

  // repeated .event_array.protobuf.Event_Array.Event event = 1;
  total_size += 1 * this->event_size();
  for (int i = 0; i < this->event_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->event(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Event_Array::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:event_array.protobuf.Event_Array)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Event_Array* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Event_Array>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:event_array.protobuf.Event_Array)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:event_array.protobuf.Event_Array)
    MergeFrom(*source);
  }
}

void Event_Array::MergeFrom(const Event_Array& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:event_array.protobuf.Event_Array)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  event_.MergeFrom(from.event_);
}

void Event_Array::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:event_array.protobuf.Event_Array)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Event_Array::CopyFrom(const Event_Array& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:event_array.protobuf.Event_Array)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Event_Array::IsInitialized() const {

  return true;
}

void Event_Array::Swap(Event_Array* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Event_Array::InternalSwap(Event_Array* other) {
  event_.UnsafeArenaSwap(&other->event_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Event_Array::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Event_Array_descriptor_;
  metadata.reflection = Event_Array_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Event_Array_Event

// optional double timestamp = 1;
void Event_Array_Event::clear_timestamp() {
  timestamp_ = 0;
}
 double Event_Array_Event::timestamp() const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.Event.timestamp)
  return timestamp_;
}
 void Event_Array_Event::set_timestamp(double value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.Event.timestamp)
}

// optional int32 x = 2;
void Event_Array_Event::clear_x() {
  x_ = 0;
}
 ::google::protobuf::int32 Event_Array_Event::x() const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.Event.x)
  return x_;
}
 void Event_Array_Event::set_x(::google::protobuf::int32 value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.Event.x)
}

// optional int32 y = 3;
void Event_Array_Event::clear_y() {
  y_ = 0;
}
 ::google::protobuf::int32 Event_Array_Event::y() const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.Event.y)
  return y_;
}
 void Event_Array_Event::set_y(::google::protobuf::int32 value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.Event.y)
}

// optional int32 polarity = 4;
void Event_Array_Event::clear_polarity() {
  polarity_ = 0;
}
 ::google::protobuf::int32 Event_Array_Event::polarity() const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.Event.polarity)
  return polarity_;
}
 void Event_Array_Event::set_polarity(::google::protobuf::int32 value) {
  
  polarity_ = value;
  // @@protoc_insertion_point(field_set:event_array.protobuf.Event_Array.Event.polarity)
}

// -------------------------------------------------------------------

// Event_Array

// repeated .event_array.protobuf.Event_Array.Event event = 1;
int Event_Array::event_size() const {
  return event_.size();
}
void Event_Array::clear_event() {
  event_.Clear();
}
const ::event_array::protobuf::Event_Array_Event& Event_Array::event(int index) const {
  // @@protoc_insertion_point(field_get:event_array.protobuf.Event_Array.event)
  return event_.Get(index);
}
::event_array::protobuf::Event_Array_Event* Event_Array::mutable_event(int index) {
  // @@protoc_insertion_point(field_mutable:event_array.protobuf.Event_Array.event)
  return event_.Mutable(index);
}
::event_array::protobuf::Event_Array_Event* Event_Array::add_event() {
  // @@protoc_insertion_point(field_add:event_array.protobuf.Event_Array.event)
  return event_.Add();
}
::google::protobuf::RepeatedPtrField< ::event_array::protobuf::Event_Array_Event >*
Event_Array::mutable_event() {
  // @@protoc_insertion_point(field_mutable_list:event_array.protobuf.Event_Array.event)
  return &event_;
}
const ::google::protobuf::RepeatedPtrField< ::event_array::protobuf::Event_Array_Event >&
Event_Array::event() const {
  // @@protoc_insertion_point(field_list:event_array.protobuf.Event_Array.event)
  return event_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace event_array

// @@protoc_insertion_point(global_scope)
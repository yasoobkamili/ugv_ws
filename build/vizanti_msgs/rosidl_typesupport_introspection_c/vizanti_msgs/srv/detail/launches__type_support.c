// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vizanti_msgs:srv/Launches.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vizanti_msgs/srv/detail/launches__rosidl_typesupport_introspection_c.h"
#include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vizanti_msgs/srv/detail/launches__functions.h"
#include "vizanti_msgs/srv/detail/launches__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vizanti_msgs__srv__Launches_Request__init(message_memory);
}

void vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_fini_function(void * message_memory)
{
  vizanti_msgs__srv__Launches_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_msgs__srv__Launches_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_members = {
  "vizanti_msgs__srv",  // message namespace
  "Launches_Request",  // message name
  1,  // number of fields
  sizeof(vizanti_msgs__srv__Launches_Request),
  vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_member_array,  // message members
  vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_type_support_handle = {
  0,
  &vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Request)() {
  if (!vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vizanti_msgs__srv__Launches_Request__rosidl_typesupport_introspection_c__Launches_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "vizanti_msgs/srv/detail/launches__rosidl_typesupport_introspection_c.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "vizanti_msgs/srv/detail/launches__functions.h"
// already included above
// #include "vizanti_msgs/srv/detail/launches__struct.h"


// Include directives for member types
// Member `launches`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vizanti_msgs__srv__Launches_Response__init(message_memory);
}

void vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_fini_function(void * message_memory)
{
  vizanti_msgs__srv__Launches_Response__fini(message_memory);
}

size_t vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__size_function__Launches_Response__launches(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_const_function__Launches_Response__launches(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_function__Launches_Response__launches(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__fetch_function__Launches_Response__launches(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_const_function__Launches_Response__launches(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__assign_function__Launches_Response__launches(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_function__Launches_Response__launches(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__resize_function__Launches_Response__launches(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_member_array[1] = {
  {
    "launches",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vizanti_msgs__srv__Launches_Response, launches),  // bytes offset in struct
    NULL,  // default value
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__size_function__Launches_Response__launches,  // size() function pointer
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_const_function__Launches_Response__launches,  // get_const(index) function pointer
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__get_function__Launches_Response__launches,  // get(index) function pointer
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__fetch_function__Launches_Response__launches,  // fetch(index, &value) function pointer
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__assign_function__Launches_Response__launches,  // assign(index, value) function pointer
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__resize_function__Launches_Response__launches  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_members = {
  "vizanti_msgs__srv",  // message namespace
  "Launches_Response",  // message name
  1,  // number of fields
  sizeof(vizanti_msgs__srv__Launches_Response),
  vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_member_array,  // message members
  vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_type_support_handle = {
  0,
  &vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Response)() {
  if (!vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vizanti_msgs__srv__Launches_Response__rosidl_typesupport_introspection_c__Launches_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vizanti_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "vizanti_msgs/srv/detail/launches__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_members = {
  "vizanti_msgs__srv",  // service namespace
  "Launches",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_Request_message_type_support_handle,
  NULL  // response message
  // vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_Response_message_type_support_handle
};

static rosidl_service_type_support_t vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_type_support_handle = {
  0,
  &vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vizanti_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches)() {
  if (!vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_type_support_handle.typesupport_identifier) {
    vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vizanti_msgs, srv, Launches_Response)()->data;
  }

  return &vizanti_msgs__srv__detail__launches__rosidl_typesupport_introspection_c__Launches_service_type_support_handle;
}

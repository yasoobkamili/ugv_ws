// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vizanti_msgs:srv/Launches.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LAUNCHES__STRUCT_H_
#define VIZANTI_MSGS__SRV__DETAIL__LAUNCHES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Launches in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__Launches_Request
{
  uint8_t structure_needs_at_least_one_member;
} vizanti_msgs__srv__Launches_Request;

// Struct for a sequence of vizanti_msgs__srv__Launches_Request.
typedef struct vizanti_msgs__srv__Launches_Request__Sequence
{
  vizanti_msgs__srv__Launches_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__Launches_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'launches'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Launches in the package vizanti_msgs.
typedef struct vizanti_msgs__srv__Launches_Response
{
  rosidl_runtime_c__String__Sequence launches;
} vizanti_msgs__srv__Launches_Response;

// Struct for a sequence of vizanti_msgs__srv__Launches_Response.
typedef struct vizanti_msgs__srv__Launches_Response__Sequence
{
  vizanti_msgs__srv__Launches_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vizanti_msgs__srv__Launches_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIZANTI_MSGS__SRV__DETAIL__LAUNCHES__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from humanoid_pkg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_H_
#define HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Status in the package humanoid_pkg.
typedef struct humanoid_pkg__msg__Status
{
  rosidl_runtime_c__String robot_name;
  int32_t battery_level;
} humanoid_pkg__msg__Status;

// Struct for a sequence of humanoid_pkg__msg__Status.
typedef struct humanoid_pkg__msg__Status__Sequence
{
  humanoid_pkg__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} humanoid_pkg__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_H_

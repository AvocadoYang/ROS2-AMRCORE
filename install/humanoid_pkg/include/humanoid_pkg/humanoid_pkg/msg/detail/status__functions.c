// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from humanoid_pkg:msg/Status.idl
// generated code does not contain a copyright notice
#include "humanoid_pkg/msg/detail/status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"

bool
humanoid_pkg__msg__Status__init(humanoid_pkg__msg__Status * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    humanoid_pkg__msg__Status__fini(msg);
    return false;
  }
  // battery_level
  return true;
}

void
humanoid_pkg__msg__Status__fini(humanoid_pkg__msg__Status * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // battery_level
}

bool
humanoid_pkg__msg__Status__are_equal(const humanoid_pkg__msg__Status * lhs, const humanoid_pkg__msg__Status * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // battery_level
  if (lhs->battery_level != rhs->battery_level) {
    return false;
  }
  return true;
}

bool
humanoid_pkg__msg__Status__copy(
  const humanoid_pkg__msg__Status * input,
  humanoid_pkg__msg__Status * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // battery_level
  output->battery_level = input->battery_level;
  return true;
}

humanoid_pkg__msg__Status *
humanoid_pkg__msg__Status__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__msg__Status * msg = (humanoid_pkg__msg__Status *)allocator.allocate(sizeof(humanoid_pkg__msg__Status), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__msg__Status));
  bool success = humanoid_pkg__msg__Status__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__msg__Status__destroy(humanoid_pkg__msg__Status * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__msg__Status__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__msg__Status__Sequence__init(humanoid_pkg__msg__Status__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__msg__Status * data = NULL;

  if (size) {
    data = (humanoid_pkg__msg__Status *)allocator.zero_allocate(size, sizeof(humanoid_pkg__msg__Status), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__msg__Status__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__msg__Status__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
humanoid_pkg__msg__Status__Sequence__fini(humanoid_pkg__msg__Status__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      humanoid_pkg__msg__Status__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

humanoid_pkg__msg__Status__Sequence *
humanoid_pkg__msg__Status__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__msg__Status__Sequence * array = (humanoid_pkg__msg__Status__Sequence *)allocator.allocate(sizeof(humanoid_pkg__msg__Status__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__msg__Status__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__msg__Status__Sequence__destroy(humanoid_pkg__msg__Status__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__msg__Status__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__msg__Status__Sequence__are_equal(const humanoid_pkg__msg__Status__Sequence * lhs, const humanoid_pkg__msg__Status__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__msg__Status__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__msg__Status__Sequence__copy(
  const humanoid_pkg__msg__Status__Sequence * input,
  humanoid_pkg__msg__Status__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__msg__Status);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__msg__Status * data =
      (humanoid_pkg__msg__Status *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__msg__Status__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__msg__Status__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__msg__Status__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from humanoid_pkg:action/Mission.idl
// generated code does not contain a copyright notice
#include "humanoid_pkg/action/detail/mission__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request_json`
#include "rosidl_runtime_c/string_functions.h"

bool
humanoid_pkg__action__Mission_Goal__init(humanoid_pkg__action__Mission_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // request_json
  if (!rosidl_runtime_c__String__init(&msg->request_json)) {
    humanoid_pkg__action__Mission_Goal__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_Goal__fini(humanoid_pkg__action__Mission_Goal * msg)
{
  if (!msg) {
    return;
  }
  // request_json
  rosidl_runtime_c__String__fini(&msg->request_json);
}

bool
humanoid_pkg__action__Mission_Goal__are_equal(const humanoid_pkg__action__Mission_Goal * lhs, const humanoid_pkg__action__Mission_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_json), &(rhs->request_json)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Goal__copy(
  const humanoid_pkg__action__Mission_Goal * input,
  humanoid_pkg__action__Mission_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // request_json
  if (!rosidl_runtime_c__String__copy(
      &(input->request_json), &(output->request_json)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_Goal *
humanoid_pkg__action__Mission_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Goal * msg = (humanoid_pkg__action__Mission_Goal *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_Goal));
  bool success = humanoid_pkg__action__Mission_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_Goal__destroy(humanoid_pkg__action__Mission_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_Goal__Sequence__init(humanoid_pkg__action__Mission_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Goal * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_Goal *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_Goal__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_Goal__Sequence__fini(humanoid_pkg__action__Mission_Goal__Sequence * array)
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
      humanoid_pkg__action__Mission_Goal__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_Goal__Sequence *
humanoid_pkg__action__Mission_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Goal__Sequence * array = (humanoid_pkg__action__Mission_Goal__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_Goal__Sequence__destroy(humanoid_pkg__action__Mission_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_Goal__Sequence__are_equal(const humanoid_pkg__action__Mission_Goal__Sequence * lhs, const humanoid_pkg__action__Mission_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Goal__Sequence__copy(
  const humanoid_pkg__action__Mission_Goal__Sequence * input,
  humanoid_pkg__action__Mission_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_Goal * data =
      (humanoid_pkg__action__Mission_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
humanoid_pkg__action__Mission_Result__init(humanoid_pkg__action__Mission_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result_status
  // result_message
  if (!rosidl_runtime_c__String__init(&msg->result_message)) {
    humanoid_pkg__action__Mission_Result__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_Result__fini(humanoid_pkg__action__Mission_Result * msg)
{
  if (!msg) {
    return;
  }
  // result_status
  // result_message
  rosidl_runtime_c__String__fini(&msg->result_message);
}

bool
humanoid_pkg__action__Mission_Result__are_equal(const humanoid_pkg__action__Mission_Result * lhs, const humanoid_pkg__action__Mission_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_status
  if (lhs->result_status != rhs->result_status) {
    return false;
  }
  // result_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result_message), &(rhs->result_message)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Result__copy(
  const humanoid_pkg__action__Mission_Result * input,
  humanoid_pkg__action__Mission_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result_status
  output->result_status = input->result_status;
  // result_message
  if (!rosidl_runtime_c__String__copy(
      &(input->result_message), &(output->result_message)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_Result *
humanoid_pkg__action__Mission_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Result * msg = (humanoid_pkg__action__Mission_Result *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_Result));
  bool success = humanoid_pkg__action__Mission_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_Result__destroy(humanoid_pkg__action__Mission_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_Result__Sequence__init(humanoid_pkg__action__Mission_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Result * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_Result *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_Result__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_Result__Sequence__fini(humanoid_pkg__action__Mission_Result__Sequence * array)
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
      humanoid_pkg__action__Mission_Result__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_Result__Sequence *
humanoid_pkg__action__Mission_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Result__Sequence * array = (humanoid_pkg__action__Mission_Result__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_Result__Sequence__destroy(humanoid_pkg__action__Mission_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_Result__Sequence__are_equal(const humanoid_pkg__action__Mission_Result__Sequence * lhs, const humanoid_pkg__action__Mission_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Result__Sequence__copy(
  const humanoid_pkg__action__Mission_Result__Sequence * input,
  humanoid_pkg__action__Mission_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_Result * data =
      (humanoid_pkg__action__Mission_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_json`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
humanoid_pkg__action__Mission_Feedback__init(humanoid_pkg__action__Mission_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_json
  if (!rosidl_runtime_c__String__init(&msg->feedback_json)) {
    humanoid_pkg__action__Mission_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_Feedback__fini(humanoid_pkg__action__Mission_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_json
  rosidl_runtime_c__String__fini(&msg->feedback_json);
}

bool
humanoid_pkg__action__Mission_Feedback__are_equal(const humanoid_pkg__action__Mission_Feedback * lhs, const humanoid_pkg__action__Mission_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_json), &(rhs->feedback_json)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Feedback__copy(
  const humanoid_pkg__action__Mission_Feedback * input,
  humanoid_pkg__action__Mission_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_json
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_json), &(output->feedback_json)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_Feedback *
humanoid_pkg__action__Mission_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Feedback * msg = (humanoid_pkg__action__Mission_Feedback *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_Feedback));
  bool success = humanoid_pkg__action__Mission_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_Feedback__destroy(humanoid_pkg__action__Mission_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_Feedback__Sequence__init(humanoid_pkg__action__Mission_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Feedback * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_Feedback *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_Feedback__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_Feedback__Sequence__fini(humanoid_pkg__action__Mission_Feedback__Sequence * array)
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
      humanoid_pkg__action__Mission_Feedback__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_Feedback__Sequence *
humanoid_pkg__action__Mission_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_Feedback__Sequence * array = (humanoid_pkg__action__Mission_Feedback__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_Feedback__Sequence__destroy(humanoid_pkg__action__Mission_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_Feedback__Sequence__are_equal(const humanoid_pkg__action__Mission_Feedback__Sequence * lhs, const humanoid_pkg__action__Mission_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_Feedback__Sequence__copy(
  const humanoid_pkg__action__Mission_Feedback__Sequence * input,
  humanoid_pkg__action__Mission_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_Feedback * data =
      (humanoid_pkg__action__Mission_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "humanoid_pkg/action/detail/mission__functions.h"

bool
humanoid_pkg__action__Mission_SendGoal_Request__init(humanoid_pkg__action__Mission_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    humanoid_pkg__action__Mission_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!humanoid_pkg__action__Mission_Goal__init(&msg->goal)) {
    humanoid_pkg__action__Mission_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_SendGoal_Request__fini(humanoid_pkg__action__Mission_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  humanoid_pkg__action__Mission_Goal__fini(&msg->goal);
}

bool
humanoid_pkg__action__Mission_SendGoal_Request__are_equal(const humanoid_pkg__action__Mission_SendGoal_Request * lhs, const humanoid_pkg__action__Mission_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!humanoid_pkg__action__Mission_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_SendGoal_Request__copy(
  const humanoid_pkg__action__Mission_SendGoal_Request * input,
  humanoid_pkg__action__Mission_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!humanoid_pkg__action__Mission_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_SendGoal_Request *
humanoid_pkg__action__Mission_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Request * msg = (humanoid_pkg__action__Mission_SendGoal_Request *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_SendGoal_Request));
  bool success = humanoid_pkg__action__Mission_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_SendGoal_Request__destroy(humanoid_pkg__action__Mission_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__init(humanoid_pkg__action__Mission_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Request * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_SendGoal_Request *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_SendGoal_Request__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__fini(humanoid_pkg__action__Mission_SendGoal_Request__Sequence * array)
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
      humanoid_pkg__action__Mission_SendGoal_Request__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_SendGoal_Request__Sequence *
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Request__Sequence * array = (humanoid_pkg__action__Mission_SendGoal_Request__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__destroy(humanoid_pkg__action__Mission_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__are_equal(const humanoid_pkg__action__Mission_SendGoal_Request__Sequence * lhs, const humanoid_pkg__action__Mission_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_SendGoal_Request__Sequence__copy(
  const humanoid_pkg__action__Mission_SendGoal_Request__Sequence * input,
  humanoid_pkg__action__Mission_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_SendGoal_Request * data =
      (humanoid_pkg__action__Mission_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
humanoid_pkg__action__Mission_SendGoal_Response__init(humanoid_pkg__action__Mission_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    humanoid_pkg__action__Mission_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_SendGoal_Response__fini(humanoid_pkg__action__Mission_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
humanoid_pkg__action__Mission_SendGoal_Response__are_equal(const humanoid_pkg__action__Mission_SendGoal_Response * lhs, const humanoid_pkg__action__Mission_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_SendGoal_Response__copy(
  const humanoid_pkg__action__Mission_SendGoal_Response * input,
  humanoid_pkg__action__Mission_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_SendGoal_Response *
humanoid_pkg__action__Mission_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Response * msg = (humanoid_pkg__action__Mission_SendGoal_Response *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_SendGoal_Response));
  bool success = humanoid_pkg__action__Mission_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_SendGoal_Response__destroy(humanoid_pkg__action__Mission_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__init(humanoid_pkg__action__Mission_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Response * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_SendGoal_Response *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_SendGoal_Response__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__fini(humanoid_pkg__action__Mission_SendGoal_Response__Sequence * array)
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
      humanoid_pkg__action__Mission_SendGoal_Response__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_SendGoal_Response__Sequence *
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_SendGoal_Response__Sequence * array = (humanoid_pkg__action__Mission_SendGoal_Response__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__destroy(humanoid_pkg__action__Mission_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__are_equal(const humanoid_pkg__action__Mission_SendGoal_Response__Sequence * lhs, const humanoid_pkg__action__Mission_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_SendGoal_Response__Sequence__copy(
  const humanoid_pkg__action__Mission_SendGoal_Response__Sequence * input,
  humanoid_pkg__action__Mission_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_SendGoal_Response * data =
      (humanoid_pkg__action__Mission_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
humanoid_pkg__action__Mission_GetResult_Request__init(humanoid_pkg__action__Mission_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    humanoid_pkg__action__Mission_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_GetResult_Request__fini(humanoid_pkg__action__Mission_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
humanoid_pkg__action__Mission_GetResult_Request__are_equal(const humanoid_pkg__action__Mission_GetResult_Request * lhs, const humanoid_pkg__action__Mission_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_GetResult_Request__copy(
  const humanoid_pkg__action__Mission_GetResult_Request * input,
  humanoid_pkg__action__Mission_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_GetResult_Request *
humanoid_pkg__action__Mission_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Request * msg = (humanoid_pkg__action__Mission_GetResult_Request *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_GetResult_Request));
  bool success = humanoid_pkg__action__Mission_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_GetResult_Request__destroy(humanoid_pkg__action__Mission_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_GetResult_Request__Sequence__init(humanoid_pkg__action__Mission_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Request * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_GetResult_Request *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_GetResult_Request__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_GetResult_Request__Sequence__fini(humanoid_pkg__action__Mission_GetResult_Request__Sequence * array)
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
      humanoid_pkg__action__Mission_GetResult_Request__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_GetResult_Request__Sequence *
humanoid_pkg__action__Mission_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Request__Sequence * array = (humanoid_pkg__action__Mission_GetResult_Request__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_GetResult_Request__Sequence__destroy(humanoid_pkg__action__Mission_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_GetResult_Request__Sequence__are_equal(const humanoid_pkg__action__Mission_GetResult_Request__Sequence * lhs, const humanoid_pkg__action__Mission_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_GetResult_Request__Sequence__copy(
  const humanoid_pkg__action__Mission_GetResult_Request__Sequence * input,
  humanoid_pkg__action__Mission_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_GetResult_Request * data =
      (humanoid_pkg__action__Mission_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "humanoid_pkg/action/detail/mission__functions.h"

bool
humanoid_pkg__action__Mission_GetResult_Response__init(humanoid_pkg__action__Mission_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!humanoid_pkg__action__Mission_Result__init(&msg->result)) {
    humanoid_pkg__action__Mission_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_GetResult_Response__fini(humanoid_pkg__action__Mission_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  humanoid_pkg__action__Mission_Result__fini(&msg->result);
}

bool
humanoid_pkg__action__Mission_GetResult_Response__are_equal(const humanoid_pkg__action__Mission_GetResult_Response * lhs, const humanoid_pkg__action__Mission_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!humanoid_pkg__action__Mission_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_GetResult_Response__copy(
  const humanoid_pkg__action__Mission_GetResult_Response * input,
  humanoid_pkg__action__Mission_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!humanoid_pkg__action__Mission_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_GetResult_Response *
humanoid_pkg__action__Mission_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Response * msg = (humanoid_pkg__action__Mission_GetResult_Response *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_GetResult_Response));
  bool success = humanoid_pkg__action__Mission_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_GetResult_Response__destroy(humanoid_pkg__action__Mission_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_GetResult_Response__Sequence__init(humanoid_pkg__action__Mission_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Response * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_GetResult_Response *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_GetResult_Response__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_GetResult_Response__Sequence__fini(humanoid_pkg__action__Mission_GetResult_Response__Sequence * array)
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
      humanoid_pkg__action__Mission_GetResult_Response__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_GetResult_Response__Sequence *
humanoid_pkg__action__Mission_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_GetResult_Response__Sequence * array = (humanoid_pkg__action__Mission_GetResult_Response__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_GetResult_Response__Sequence__destroy(humanoid_pkg__action__Mission_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_GetResult_Response__Sequence__are_equal(const humanoid_pkg__action__Mission_GetResult_Response__Sequence * lhs, const humanoid_pkg__action__Mission_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_GetResult_Response__Sequence__copy(
  const humanoid_pkg__action__Mission_GetResult_Response__Sequence * input,
  humanoid_pkg__action__Mission_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_GetResult_Response * data =
      (humanoid_pkg__action__Mission_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "humanoid_pkg/action/detail/mission__functions.h"

bool
humanoid_pkg__action__Mission_FeedbackMessage__init(humanoid_pkg__action__Mission_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    humanoid_pkg__action__Mission_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!humanoid_pkg__action__Mission_Feedback__init(&msg->feedback)) {
    humanoid_pkg__action__Mission_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
humanoid_pkg__action__Mission_FeedbackMessage__fini(humanoid_pkg__action__Mission_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  humanoid_pkg__action__Mission_Feedback__fini(&msg->feedback);
}

bool
humanoid_pkg__action__Mission_FeedbackMessage__are_equal(const humanoid_pkg__action__Mission_FeedbackMessage * lhs, const humanoid_pkg__action__Mission_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!humanoid_pkg__action__Mission_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
humanoid_pkg__action__Mission_FeedbackMessage__copy(
  const humanoid_pkg__action__Mission_FeedbackMessage * input,
  humanoid_pkg__action__Mission_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!humanoid_pkg__action__Mission_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

humanoid_pkg__action__Mission_FeedbackMessage *
humanoid_pkg__action__Mission_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_FeedbackMessage * msg = (humanoid_pkg__action__Mission_FeedbackMessage *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(humanoid_pkg__action__Mission_FeedbackMessage));
  bool success = humanoid_pkg__action__Mission_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
humanoid_pkg__action__Mission_FeedbackMessage__destroy(humanoid_pkg__action__Mission_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    humanoid_pkg__action__Mission_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__init(humanoid_pkg__action__Mission_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_FeedbackMessage * data = NULL;

  if (size) {
    data = (humanoid_pkg__action__Mission_FeedbackMessage *)allocator.zero_allocate(size, sizeof(humanoid_pkg__action__Mission_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = humanoid_pkg__action__Mission_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        humanoid_pkg__action__Mission_FeedbackMessage__fini(&data[i - 1]);
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
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__fini(humanoid_pkg__action__Mission_FeedbackMessage__Sequence * array)
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
      humanoid_pkg__action__Mission_FeedbackMessage__fini(&array->data[i]);
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

humanoid_pkg__action__Mission_FeedbackMessage__Sequence *
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  humanoid_pkg__action__Mission_FeedbackMessage__Sequence * array = (humanoid_pkg__action__Mission_FeedbackMessage__Sequence *)allocator.allocate(sizeof(humanoid_pkg__action__Mission_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = humanoid_pkg__action__Mission_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__destroy(humanoid_pkg__action__Mission_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    humanoid_pkg__action__Mission_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__are_equal(const humanoid_pkg__action__Mission_FeedbackMessage__Sequence * lhs, const humanoid_pkg__action__Mission_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!humanoid_pkg__action__Mission_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
humanoid_pkg__action__Mission_FeedbackMessage__Sequence__copy(
  const humanoid_pkg__action__Mission_FeedbackMessage__Sequence * input,
  humanoid_pkg__action__Mission_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(humanoid_pkg__action__Mission_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    humanoid_pkg__action__Mission_FeedbackMessage * data =
      (humanoid_pkg__action__Mission_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!humanoid_pkg__action__Mission_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          humanoid_pkg__action__Mission_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!humanoid_pkg__action__Mission_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

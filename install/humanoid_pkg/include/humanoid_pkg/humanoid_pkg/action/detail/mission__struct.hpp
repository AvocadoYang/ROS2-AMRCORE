// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from humanoid_pkg:action/Mission.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_HPP_
#define HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_Goal __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_Goal __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_Goal_
{
  using Type = Mission_Goal_<ContainerAllocator>;

  explicit Mission_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_json = "";
    }
  }

  explicit Mission_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_json = "";
    }
  }

  // field types and members
  using _request_json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_json_type request_json;

  // setters for named parameter idiom
  Type & set__request_json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_json = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_Goal
    std::shared_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_Goal
    std::shared_ptr<humanoid_pkg::action::Mission_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_Goal_ & other) const
  {
    if (this->request_json != other.request_json) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_Goal_

// alias to use template instance with default allocator
using Mission_Goal =
  humanoid_pkg::action::Mission_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg


#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_Result __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_Result __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_Result_
{
  using Type = Mission_Result_<ContainerAllocator>;

  explicit Mission_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_status = 0;
      this->result_message = "";
    }
  }

  explicit Mission_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result_status = 0;
      this->result_message = "";
    }
  }

  // field types and members
  using _result_status_type =
    int16_t;
  _result_status_type result_status;
  using _result_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_message_type result_message;

  // setters for named parameter idiom
  Type & set__result_status(
    const int16_t & _arg)
  {
    this->result_status = _arg;
    return *this;
  }
  Type & set__result_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_Result
    std::shared_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_Result
    std::shared_ptr<humanoid_pkg::action::Mission_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_Result_ & other) const
  {
    if (this->result_status != other.result_status) {
      return false;
    }
    if (this->result_message != other.result_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_Result_

// alias to use template instance with default allocator
using Mission_Result =
  humanoid_pkg::action::Mission_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg


#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_Feedback __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_Feedback_
{
  using Type = Mission_Feedback_<ContainerAllocator>;

  explicit Mission_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_json = "";
    }
  }

  explicit Mission_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feedback_json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->feedback_json = "";
    }
  }

  // field types and members
  using _feedback_json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_json_type feedback_json;

  // setters for named parameter idiom
  Type & set__feedback_json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_json = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_Feedback
    std::shared_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_Feedback
    std::shared_ptr<humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_Feedback_ & other) const
  {
    if (this->feedback_json != other.feedback_json) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_Feedback_

// alias to use template instance with default allocator
using Mission_Feedback =
  humanoid_pkg::action::Mission_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "humanoid_pkg/action/detail/mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Request __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_SendGoal_Request_
{
  using Type = Mission_SendGoal_Request_<ContainerAllocator>;

  explicit Mission_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Mission_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    humanoid_pkg::action::Mission_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const humanoid_pkg::action::Mission_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Request
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Request
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_SendGoal_Request_

// alias to use template instance with default allocator
using Mission_SendGoal_Request =
  humanoid_pkg::action::Mission_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Response __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_SendGoal_Response_
{
  using Type = Mission_SendGoal_Response_<ContainerAllocator>;

  explicit Mission_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Mission_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Response
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_SendGoal_Response
    std::shared_ptr<humanoid_pkg::action::Mission_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_SendGoal_Response_

// alias to use template instance with default allocator
using Mission_SendGoal_Response =
  humanoid_pkg::action::Mission_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg

namespace humanoid_pkg
{

namespace action
{

struct Mission_SendGoal
{
  using Request = humanoid_pkg::action::Mission_SendGoal_Request;
  using Response = humanoid_pkg::action::Mission_SendGoal_Response;
};

}  // namespace action

}  // namespace humanoid_pkg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_GetResult_Request __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_GetResult_Request_
{
  using Type = Mission_GetResult_Request_<ContainerAllocator>;

  explicit Mission_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Mission_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_GetResult_Request
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_GetResult_Request
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_GetResult_Request_

// alias to use template instance with default allocator
using Mission_GetResult_Request =
  humanoid_pkg::action::Mission_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg


// Include directives for member types
// Member 'result'
// already included above
// #include "humanoid_pkg/action/detail/mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_GetResult_Response __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_GetResult_Response_
{
  using Type = Mission_GetResult_Response_<ContainerAllocator>;

  explicit Mission_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Mission_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    humanoid_pkg::action::Mission_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const humanoid_pkg::action::Mission_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_GetResult_Response
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_GetResult_Response
    std::shared_ptr<humanoid_pkg::action::Mission_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_GetResult_Response_

// alias to use template instance with default allocator
using Mission_GetResult_Response =
  humanoid_pkg::action::Mission_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg

namespace humanoid_pkg
{

namespace action
{

struct Mission_GetResult
{
  using Request = humanoid_pkg::action::Mission_GetResult_Request;
  using Response = humanoid_pkg::action::Mission_GetResult_Response;
};

}  // namespace action

}  // namespace humanoid_pkg


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "humanoid_pkg/action/detail/mission__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__action__Mission_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__action__Mission_FeedbackMessage __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Mission_FeedbackMessage_
{
  using Type = Mission_FeedbackMessage_<ContainerAllocator>;

  explicit Mission_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Mission_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    humanoid_pkg::action::Mission_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const humanoid_pkg::action::Mission_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__action__Mission_FeedbackMessage
    std::shared_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__action__Mission_FeedbackMessage
    std::shared_ptr<humanoid_pkg::action::Mission_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mission_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mission_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mission_FeedbackMessage_

// alias to use template instance with default allocator
using Mission_FeedbackMessage =
  humanoid_pkg::action::Mission_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace humanoid_pkg

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace humanoid_pkg
{

namespace action
{

struct Mission
{
  /// The goal message defined in the action definition.
  using Goal = humanoid_pkg::action::Mission_Goal;
  /// The result message defined in the action definition.
  using Result = humanoid_pkg::action::Mission_Result;
  /// The feedback message defined in the action definition.
  using Feedback = humanoid_pkg::action::Mission_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = humanoid_pkg::action::Mission_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = humanoid_pkg::action::Mission_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = humanoid_pkg::action::Mission_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Mission Mission;

}  // namespace action

}  // namespace humanoid_pkg

#endif  // HUMANOID_PKG__ACTION__DETAIL__MISSION__STRUCT_HPP_

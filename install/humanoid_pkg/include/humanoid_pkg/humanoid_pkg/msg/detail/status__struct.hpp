// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from humanoid_pkg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_HPP_
#define HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__humanoid_pkg__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__humanoid_pkg__msg__Status __declspec(deprecated)
#endif

namespace humanoid_pkg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->battery_level = 0l;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
      this->battery_level = 0l;
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;
  using _battery_level_type =
    int32_t;
  _battery_level_type battery_level;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__battery_level(
    const int32_t & _arg)
  {
    this->battery_level = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    humanoid_pkg::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const humanoid_pkg::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<humanoid_pkg::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<humanoid_pkg::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      humanoid_pkg::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<humanoid_pkg::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<humanoid_pkg::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<humanoid_pkg::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__humanoid_pkg__msg__Status
    std::shared_ptr<humanoid_pkg::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__humanoid_pkg__msg__Status
    std::shared_ptr<humanoid_pkg::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->battery_level != other.battery_level) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  humanoid_pkg::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace humanoid_pkg

#endif  // HUMANOID_PKG__MSG__DETAIL__STATUS__STRUCT_HPP_

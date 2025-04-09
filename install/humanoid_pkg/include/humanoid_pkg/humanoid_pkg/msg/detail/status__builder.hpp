// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from humanoid_pkg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__MSG__DETAIL__STATUS__BUILDER_HPP_
#define HUMANOID_PKG__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "humanoid_pkg/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace humanoid_pkg
{

namespace msg
{

namespace builder
{

class Init_Status_battery_level
{
public:
  explicit Init_Status_battery_level(::humanoid_pkg::msg::Status & msg)
  : msg_(msg)
  {}
  ::humanoid_pkg::msg::Status battery_level(::humanoid_pkg::msg::Status::_battery_level_type arg)
  {
    msg_.battery_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::humanoid_pkg::msg::Status msg_;
};

class Init_Status_robot_name
{
public:
  Init_Status_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_battery_level robot_name(::humanoid_pkg::msg::Status::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_Status_battery_level(msg_);
  }

private:
  ::humanoid_pkg::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::humanoid_pkg::msg::Status>()
{
  return humanoid_pkg::msg::builder::Init_Status_robot_name();
}

}  // namespace humanoid_pkg

#endif  // HUMANOID_PKG__MSG__DETAIL__STATUS__BUILDER_HPP_

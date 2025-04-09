// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from humanoid_pkg:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef HUMANOID_PKG__MSG__DETAIL__STATUS__TRAITS_HPP_
#define HUMANOID_PKG__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "humanoid_pkg/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace humanoid_pkg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: battery_level
  {
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: battery_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_level: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace humanoid_pkg

namespace rosidl_generator_traits
{

[[deprecated("use humanoid_pkg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const humanoid_pkg::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  humanoid_pkg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use humanoid_pkg::msg::to_yaml() instead")]]
inline std::string to_yaml(const humanoid_pkg::msg::Status & msg)
{
  return humanoid_pkg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<humanoid_pkg::msg::Status>()
{
  return "humanoid_pkg::msg::Status";
}

template<>
inline const char * name<humanoid_pkg::msg::Status>()
{
  return "humanoid_pkg/msg/Status";
}

template<>
struct has_fixed_size<humanoid_pkg::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<humanoid_pkg::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<humanoid_pkg::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // HUMANOID_PKG__MSG__DETAIL__STATUS__TRAITS_HPP_

cmake_minimum_required(VERSION 3.8)
project(humanoid_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

message(${PROJECT_NAME})


rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Mission.action"
  "action/Fibonacci.action"
  "msg/Status.msg"
  "srv/ShortestPath.srv"
  "srv/TrafficStatus.srv"
  DEPENDENCIES builtin_interfaces std_msgs
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()
ament_export_dependencies(rosidl_default_runtime)
ament_export_dependencies(rosidl_default_runtime std_msgs)
ament_package()

# install rules added by ros2pkg_configure_nodejs
install(FILES 
  package.json
  DESTINATION share/${PROJECT_NAME}/
 )
 
install(DIRECTORY 
  config
  dist
  launch
  node_modules
  DESTINATION share/${PROJECT_NAME}/
  OPTIONAL
 )


 

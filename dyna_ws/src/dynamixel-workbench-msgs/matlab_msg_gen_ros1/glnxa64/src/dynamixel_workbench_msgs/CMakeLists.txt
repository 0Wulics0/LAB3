cmake_minimum_required(VERSION 3.5)
project(dynamixel_workbench_msgs)
set(CMAKE_VERBOSE_MAKEFILE ON)
# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()
## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  message_generation
)
## System dependencies are found with CMake''s conventions
################################################
## Declare ROS messages, services and actions ##
################################################
add_message_files(
    FILES
    AX.msg
    DynamixelInfo.msg
    DynamixelLoadInfo.msg
    DynamixelState.msg
    DynamixelStateList.msg
    EX.msg
    MX.msg
    MX2.msg
    MX2Ext.msg
    MXExt.msg
    PRO.msg
    PROExt.msg
    RX.msg
    XH.msg
    XL.msg
    XL320.msg
    XM.msg
    XMExt.msg
)
add_service_files(
    FILES
    DynamixelCommand.srv
    GetDynamixelInfo.srv
)
find_package( roscpp REQUIRED)
## Generate added messages and services with any dependencies listed here
generate_messages(
  DEPENDENCIES
  std_msgs
)
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
  CATKIN_DEPENDS
  "message_runtime"
  "roscpp"
)
###########
## Build ##
###########
## Specify additional locations of header files
## Your package locations should be listed before other locations
# include_directories(include)
include_directories(
  include
  ${PROJECT_SOURCE_DIR}
  ${Boost_INCLUDE_DIRS}
  ${catkin_INCLUDE_DIRS}
 "/home/wulics/MatLab/extern/include"
 "/home/wulics/MatLab/extern/include/MatlabDataArray"
 "/home/wulics/MatLab/toolbox/ros/include/ros1"
 "/home/wulics/MatLab/sys/ros1/glnxa64/ros1/include"
 "/home/wulics/MatLab/sys/ros1/glnxa64/ros1/console_bridge/include"
 "/home/wulics/MatLab/toolbox/ros/mlroscpp/custom_messages/include"
 "/home/wulics/MatLab/sys/ros1/glnxa64/ros1/boost/include"
  "include/dynamixel_workbench_msgs"
)
set (CMAKE_SKIP_BUILD_RPATH false)
set (CMAKE_BUILD_WITH_INSTALL_RPATH true)
set (CMAKE_INSTALL_RPATH "${CMAKE_INSTALL_PREFIX}/lib")
## Get list of .c files in project source directory
file(GLOB ${PROJECT_NAME}_C_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.c)
## Get list of .cpp files in project source directory
file(GLOB ${PROJECT_NAME}_CPP_SOURCES RELATIVE ${PROJECT_SOURCE_DIR} ${PROJECT_SOURCE_DIR}/*.cpp)
link_directories("/home/wulics/MatLab/extern/bin/glnxa64")
link_directories("/home/wulics/MatLab/sys/ros1/glnxa64/ros1/console_bridge/lib")
link_directories("/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib")
link_directories("/home/wulics/MatLab/sys/ros1/glnxa64/ros1/boost/lib")
# Declare library
add_library(
    dynamixel_workbench_msgs_matlab 
    SHARED
    src/dynamixel_workbench_msgs_AX_common.cpp
    src/dynamixel_workbench_msgs_msg_AX_publisher.cpp
    src/dynamixel_workbench_msgs_msg_AX_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelInfo_common.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelInfo_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelInfo_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelLoadInfo_common.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelLoadInfo_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelLoadInfo_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelState_common.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelState_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelState_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelStateList_common.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelStateList_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelStateList_subscriber.cpp
    src/dynamixel_workbench_msgs_EX_common.cpp
    src/dynamixel_workbench_msgs_msg_EX_publisher.cpp
    src/dynamixel_workbench_msgs_msg_EX_subscriber.cpp
    src/dynamixel_workbench_msgs_MX_common.cpp
    src/dynamixel_workbench_msgs_msg_MX_publisher.cpp
    src/dynamixel_workbench_msgs_msg_MX_subscriber.cpp
    src/dynamixel_workbench_msgs_MX2_common.cpp
    src/dynamixel_workbench_msgs_msg_MX2_publisher.cpp
    src/dynamixel_workbench_msgs_msg_MX2_subscriber.cpp
    src/dynamixel_workbench_msgs_MX2Ext_common.cpp
    src/dynamixel_workbench_msgs_msg_MX2Ext_publisher.cpp
    src/dynamixel_workbench_msgs_msg_MX2Ext_subscriber.cpp
    src/dynamixel_workbench_msgs_MXExt_common.cpp
    src/dynamixel_workbench_msgs_msg_MXExt_publisher.cpp
    src/dynamixel_workbench_msgs_msg_MXExt_subscriber.cpp
    src/dynamixel_workbench_msgs_PRO_common.cpp
    src/dynamixel_workbench_msgs_msg_PRO_publisher.cpp
    src/dynamixel_workbench_msgs_msg_PRO_subscriber.cpp
    src/dynamixel_workbench_msgs_PROExt_common.cpp
    src/dynamixel_workbench_msgs_msg_PROExt_publisher.cpp
    src/dynamixel_workbench_msgs_msg_PROExt_subscriber.cpp
    src/dynamixel_workbench_msgs_RX_common.cpp
    src/dynamixel_workbench_msgs_msg_RX_publisher.cpp
    src/dynamixel_workbench_msgs_msg_RX_subscriber.cpp
    src/dynamixel_workbench_msgs_XH_common.cpp
    src/dynamixel_workbench_msgs_msg_XH_publisher.cpp
    src/dynamixel_workbench_msgs_msg_XH_subscriber.cpp
    src/dynamixel_workbench_msgs_XL_common.cpp
    src/dynamixel_workbench_msgs_msg_XL_publisher.cpp
    src/dynamixel_workbench_msgs_msg_XL_subscriber.cpp
    src/dynamixel_workbench_msgs_XL320_common.cpp
    src/dynamixel_workbench_msgs_msg_XL320_publisher.cpp
    src/dynamixel_workbench_msgs_msg_XL320_subscriber.cpp
    src/dynamixel_workbench_msgs_XM_common.cpp
    src/dynamixel_workbench_msgs_msg_XM_publisher.cpp
    src/dynamixel_workbench_msgs_msg_XM_subscriber.cpp
    src/dynamixel_workbench_msgs_XMExt_common.cpp
    src/dynamixel_workbench_msgs_msg_XMExt_publisher.cpp
    src/dynamixel_workbench_msgs_msg_XMExt_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelCommand_request_common.cpp
    src/dynamixel_workbench_msgs_DynamixelCommand_response_common.cpp
    src/dynamixel_workbench_msgs_srv_DynamixelCommand_client.cpp
    src/dynamixel_workbench_msgs_srv_DynamixelCommand_server.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelCommandRequest_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelCommandRequest_subscriber.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelCommandResponse_publisher.cpp
    src/dynamixel_workbench_msgs_msg_DynamixelCommandResponse_subscriber.cpp
    src/dynamixel_workbench_msgs_DynamixelCommandRequest_common.cpp
    src/dynamixel_workbench_msgs_DynamixelCommandResponse_common.cpp
    src/dynamixel_workbench_msgs_GetDynamixelInfo_request_common.cpp
    src/dynamixel_workbench_msgs_GetDynamixelInfo_response_common.cpp
    src/dynamixel_workbench_msgs_srv_GetDynamixelInfo_client.cpp
    src/dynamixel_workbench_msgs_srv_GetDynamixelInfo_server.cpp
    src/dynamixel_workbench_msgs_msg_GetDynamixelInfoRequest_publisher.cpp
    src/dynamixel_workbench_msgs_msg_GetDynamixelInfoRequest_subscriber.cpp
    src/dynamixel_workbench_msgs_msg_GetDynamixelInfoResponse_publisher.cpp
    src/dynamixel_workbench_msgs_msg_GetDynamixelInfoResponse_subscriber.cpp
    src/dynamixel_workbench_msgs_GetDynamixelInfoRequest_common.cpp
    src/dynamixel_workbench_msgs_GetDynamixelInfoResponse_common.cpp
)
target_include_directories(dynamixel_workbench_msgs_matlab PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries( dynamixel_workbench_msgs_matlab
	"/home/wulics/MatLab/extern/bin/glnxa64/libMatlabDataArray.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/console_bridge/lib/libconsole_bridge.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib/libclass_loader.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib/librosconsole.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib/libroscpp.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib/libroscpp_serialization.so"
	"/home/wulics/MatLab/sys/ros1/glnxa64/ros1/lib/librostime.so"
	${Boost_LIBRARIES}
	${CMAKE_DL_LIBS}
	)
## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
add_dependencies(
  dynamixel_workbench_msgs_matlab
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)
# Causes the visibility macros to use dllexport rather than dllimport,
# which is appropriate when building the dll but not consuming it.
target_compile_definitions(dynamixel_workbench_msgs_matlab PRIVATE "DYNAMIXEL_WORKBENCH_MSGS_BUILDING_LIBRARY")
install(
  DIRECTORY include/
  DESTINATION include
)
install(
  TARGETS dynamixel_workbench_msgs_matlab
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)
install (DIRECTORY m/ DESTINATION m/ FILES_MATCHING PATTERN "*.m")
# Generated 13-Oct-2022 23:08:26
# Copyright 2019-2020 The MathWorks, Inc.

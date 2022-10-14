# Install script for directory: /home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs/msg" TYPE FILE FILES
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs/srv" TYPE FILE FILES
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs/cmake" TYPE FILE FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/build/dynamixel_workbench_msgs/catkin_generated/installspace/dynamixel_workbench_msgs-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/devel/include/dynamixel_workbench_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/home/wulics/.matlab/R2020b/ros1/glnxa64/venv/bin/python2" -m compileall "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/dynamixel_workbench_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/devel/lib/python2.7/dist-packages/dynamixel_workbench_msgs")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/build/dynamixel_workbench_msgs/catkin_generated/installspace/dynamixel_workbench_msgs.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs/cmake" TYPE FILE FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/build/dynamixel_workbench_msgs/catkin_generated/installspace/dynamixel_workbench_msgs-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs/cmake" TYPE FILE FILES
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/build/dynamixel_workbench_msgs/catkin_generated/installspace/dynamixel_workbench_msgsConfig.cmake"
    "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/build/dynamixel_workbench_msgs/catkin_generated/installspace/dynamixel_workbench_msgsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dynamixel_workbench_msgs" TYPE FILE FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/package.xml")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/devel/lib/libdynamixel_workbench_msgs_matlab.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamixel_workbench_msgs_matlab.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamixel_workbench_msgs_matlab.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libdynamixel_workbench_msgs_matlab.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/m/" TYPE DIRECTORY FILES "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/m/" FILES_MATCHING REGEX "/[^/]*\\.m$")
endif()


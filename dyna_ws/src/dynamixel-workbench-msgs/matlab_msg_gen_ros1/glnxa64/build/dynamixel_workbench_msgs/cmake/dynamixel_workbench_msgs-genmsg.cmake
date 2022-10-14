# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "dynamixel_workbench_msgs: 18 messages, 2 services")

set(MSG_I_FLAGS "-Idynamixel_workbench_msgs:/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg;-Istd_msgs:/home/wulics/MatLab/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(dynamixel_workbench_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv" "dynamixel_workbench_msgs/DynamixelLoadInfo:dynamixel_workbench_msgs/DynamixelInfo"
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg" "dynamixel_workbench_msgs/DynamixelState"
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg" "dynamixel_workbench_msgs/DynamixelLoadInfo"
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg" ""
)

get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg" NAME_WE)
add_custom_target(_dynamixel_workbench_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "dynamixel_workbench_msgs" "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg" ""
)

#
#  langs = gencpp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)

### Generating Services
_generate_srv_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg;/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_srv_cpp(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
)

### Generating Module File
_generate_module_cpp(dynamixel_workbench_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(dynamixel_workbench_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(dynamixel_workbench_msgs_generate_messages dynamixel_workbench_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dynamixel_workbench_msgs_gencpp)
add_dependencies(dynamixel_workbench_msgs_gencpp dynamixel_workbench_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dynamixel_workbench_msgs_generate_messages_cpp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_msg_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)

### Generating Services
_generate_srv_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv"
  "${MSG_I_FLAGS}"
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg;/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)
_generate_srv_py(dynamixel_workbench_msgs
  "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
)

### Generating Module File
_generate_module_py(dynamixel_workbench_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(dynamixel_workbench_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(dynamixel_workbench_msgs_generate_messages dynamixel_workbench_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelState.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XMExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XH.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/EX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/GetDynamixelInfo.srv" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelStateList.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MXExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelInfo.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand.srv" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/RX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX2Ext.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PROExt.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/DynamixelLoadInfo.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/MX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XL320.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/PRO.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/AX.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/wulics/Documents/Robotica2022-2S/LAB3/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/msg/XM.msg" NAME_WE)
add_dependencies(dynamixel_workbench_msgs_generate_messages_py _dynamixel_workbench_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(dynamixel_workbench_msgs_genpy)
add_dependencies(dynamixel_workbench_msgs_genpy dynamixel_workbench_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS dynamixel_workbench_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/dynamixel_workbench_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(dynamixel_workbench_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs)
  install(CODE "execute_process(COMMAND \"/home/wulics/.matlab/R2020b/ros1/glnxa64/venv/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/dynamixel_workbench_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(dynamixel_workbench_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()

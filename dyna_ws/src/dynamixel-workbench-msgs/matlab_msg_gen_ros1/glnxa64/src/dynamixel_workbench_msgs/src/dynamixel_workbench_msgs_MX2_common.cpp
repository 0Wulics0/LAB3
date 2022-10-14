// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for dynamixel_workbench_msgs/MX2
#include "boost/date_time.hpp"
#include "boost/shared_array.hpp"
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#pragma warning(disable : 4127)
#pragma warning(disable : 4267)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "ros/ros.h"
#include "dynamixel_workbench_msgs/MX2.h"
#include "visibility_control.h"
#ifndef FOUNDATION_MATLABDATA_API
#include "MDArray.hpp"
#include "StructArray.hpp"
#include "TypedArrayRef.hpp"
#include "Struct.hpp"
#include "ArrayFactory.hpp"
#include "StructRef.hpp"
#include "Reference.hpp"
#endif
#ifndef FOUNDATION_MATLABDATA_API
typedef matlab::data::Array MDArray_T;
typedef matlab::data::ArrayFactory MDFactory_T;
#else
typedef foundation::matlabdata::Array MDArray_T;
typedef foundation::matlabdata::standalone::ClientArrayFactory MDFactory_T;
#endif
namespace dynamixel_workbench_msgs {
namespace matlabhelper {
namespace MX2 {
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<dynamixel_workbench_msgs::MX2>& msg, const matlab::data::StructArray arr) {
    try {
        //Model_Number
        const matlab::data::TypedArray<uint16_t> Model_Number_arr = arr[0]["Model_Number"];
        msg->Model_Number = Model_Number_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Model_Number' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Model_Number' is wrong type; expected a uint16.");
    }
    try {
        //Firmware_Version
        const matlab::data::TypedArray<uint8_t> Firmware_Version_arr = arr[0]["Firmware_Version"];
        msg->Firmware_Version = Firmware_Version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Firmware_Version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Firmware_Version' is wrong type; expected a uint8.");
    }
    try {
        //ID
        const matlab::data::TypedArray<uint8_t> ID_arr = arr[0]["ID"];
        msg->ID = ID_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'ID' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'ID' is wrong type; expected a uint8.");
    }
    try {
        //Baud_Rate
        const matlab::data::TypedArray<uint8_t> Baud_Rate_arr = arr[0]["Baud_Rate"];
        msg->Baud_Rate = Baud_Rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Baud_Rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Baud_Rate' is wrong type; expected a uint8.");
    }
    try {
        //Return_Delay_Time
        const matlab::data::TypedArray<uint8_t> Return_Delay_Time_arr = arr[0]["Return_Delay_Time"];
        msg->Return_Delay_Time = Return_Delay_Time_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Return_Delay_Time' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Return_Delay_Time' is wrong type; expected a uint8.");
    }
    try {
        //Drive_Mode
        const matlab::data::TypedArray<uint8_t> Drive_Mode_arr = arr[0]["Drive_Mode"];
        msg->Drive_Mode = Drive_Mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Drive_Mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Drive_Mode' is wrong type; expected a uint8.");
    }
    try {
        //Operating_Mode
        const matlab::data::TypedArray<uint8_t> Operating_Mode_arr = arr[0]["Operating_Mode"];
        msg->Operating_Mode = Operating_Mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Operating_Mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Operating_Mode' is wrong type; expected a uint8.");
    }
    try {
        //Secondary_ID
        const matlab::data::TypedArray<uint8_t> Secondary_ID_arr = arr[0]["Secondary_ID"];
        msg->Secondary_ID = Secondary_ID_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Secondary_ID' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Secondary_ID' is wrong type; expected a uint8.");
    }
    try {
        //Protocol_Version
        const matlab::data::TypedArray<uint8_t> Protocol_Version_arr = arr[0]["Protocol_Version"];
        msg->Protocol_Version = Protocol_Version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Protocol_Version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Protocol_Version' is wrong type; expected a uint8.");
    }
    try {
        //Homing_Offset
        const matlab::data::TypedArray<int32_t> Homing_Offset_arr = arr[0]["Homing_Offset"];
        msg->Homing_Offset = Homing_Offset_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Homing_Offset' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Homing_Offset' is wrong type; expected a int32.");
    }
    try {
        //Moving_Threshold
        const matlab::data::TypedArray<uint32_t> Moving_Threshold_arr = arr[0]["Moving_Threshold"];
        msg->Moving_Threshold = Moving_Threshold_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Moving_Threshold' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Moving_Threshold' is wrong type; expected a uint32.");
    }
    try {
        //Temperature_Limit
        const matlab::data::TypedArray<uint8_t> Temperature_Limit_arr = arr[0]["Temperature_Limit"];
        msg->Temperature_Limit = Temperature_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Temperature_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Temperature_Limit' is wrong type; expected a uint8.");
    }
    try {
        //Max_Voltage_Limit
        const matlab::data::TypedArray<uint16_t> Max_Voltage_Limit_arr = arr[0]["Max_Voltage_Limit"];
        msg->Max_Voltage_Limit = Max_Voltage_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Max_Voltage_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Max_Voltage_Limit' is wrong type; expected a uint16.");
    }
    try {
        //Min_Voltage_Limit
        const matlab::data::TypedArray<uint16_t> Min_Voltage_Limit_arr = arr[0]["Min_Voltage_Limit"];
        msg->Min_Voltage_Limit = Min_Voltage_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Min_Voltage_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Min_Voltage_Limit' is wrong type; expected a uint16.");
    }
    try {
        //PWM_Limit
        const matlab::data::TypedArray<uint16_t> PWM_Limit_arr = arr[0]["PWM_Limit"];
        msg->PWM_Limit = PWM_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'PWM_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'PWM_Limit' is wrong type; expected a uint16.");
    }
    try {
        //Acceleration_Limit
        const matlab::data::TypedArray<uint32_t> Acceleration_Limit_arr = arr[0]["Acceleration_Limit"];
        msg->Acceleration_Limit = Acceleration_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Acceleration_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Acceleration_Limit' is wrong type; expected a uint32.");
    }
    try {
        //Velocity_Limit
        const matlab::data::TypedArray<uint32_t> Velocity_Limit_arr = arr[0]["Velocity_Limit"];
        msg->Velocity_Limit = Velocity_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Velocity_Limit' is wrong type; expected a uint32.");
    }
    try {
        //Max_Position_Limit
        const matlab::data::TypedArray<uint32_t> Max_Position_Limit_arr = arr[0]["Max_Position_Limit"];
        msg->Max_Position_Limit = Max_Position_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Max_Position_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Max_Position_Limit' is wrong type; expected a uint32.");
    }
    try {
        //Min_Position_Limit
        const matlab::data::TypedArray<uint32_t> Min_Position_Limit_arr = arr[0]["Min_Position_Limit"];
        msg->Min_Position_Limit = Min_Position_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Min_Position_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Min_Position_Limit' is wrong type; expected a uint32.");
    }
    try {
        //Shutdown
        const matlab::data::TypedArray<uint8_t> Shutdown_arr = arr[0]["Shutdown"];
        msg->Shutdown = Shutdown_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Shutdown' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Shutdown' is wrong type; expected a uint8.");
    }
    try {
        //Torque_Enable
        const matlab::data::TypedArray<uint8_t> Torque_Enable_arr = arr[0]["Torque_Enable"];
        msg->Torque_Enable = Torque_Enable_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Torque_Enable' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Torque_Enable' is wrong type; expected a uint8.");
    }
    try {
        //LED
        const matlab::data::TypedArray<uint8_t> LED_arr = arr[0]["LED"];
        msg->LED = LED_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LED' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'LED' is wrong type; expected a uint8.");
    }
    try {
        //Status_Return_Level
        const matlab::data::TypedArray<uint8_t> Status_Return_Level_arr = arr[0]["Status_Return_Level"];
        msg->Status_Return_Level = Status_Return_Level_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Status_Return_Level' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Status_Return_Level' is wrong type; expected a uint8.");
    }
    try {
        //Registered_Instruction
        const matlab::data::TypedArray<uint8_t> Registered_Instruction_arr = arr[0]["Registered_Instruction"];
        msg->Registered_Instruction = Registered_Instruction_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Registered_Instruction' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Registered_Instruction' is wrong type; expected a uint8.");
    }
    try {
        //Hardware_Error_Status
        const matlab::data::TypedArray<uint8_t> Hardware_Error_Status_arr = arr[0]["Hardware_Error_Status"];
        msg->Hardware_Error_Status = Hardware_Error_Status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Hardware_Error_Status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Hardware_Error_Status' is wrong type; expected a uint8.");
    }
    try {
        //Velocity_I_Gain
        const matlab::data::TypedArray<uint16_t> Velocity_I_Gain_arr = arr[0]["Velocity_I_Gain"];
        msg->Velocity_I_Gain = Velocity_I_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity_I_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Velocity_I_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Velocity_P_Gain
        const matlab::data::TypedArray<uint16_t> Velocity_P_Gain_arr = arr[0]["Velocity_P_Gain"];
        msg->Velocity_P_Gain = Velocity_P_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity_P_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Velocity_P_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Position_D_Gain
        const matlab::data::TypedArray<uint16_t> Position_D_Gain_arr = arr[0]["Position_D_Gain"];
        msg->Position_D_Gain = Position_D_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position_D_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Position_D_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Position_I_Gain
        const matlab::data::TypedArray<uint16_t> Position_I_Gain_arr = arr[0]["Position_I_Gain"];
        msg->Position_I_Gain = Position_I_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position_I_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Position_I_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Position_P_Gain
        const matlab::data::TypedArray<uint16_t> Position_P_Gain_arr = arr[0]["Position_P_Gain"];
        msg->Position_P_Gain = Position_P_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position_P_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Position_P_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Feedforward_2nd_Gain
        const matlab::data::TypedArray<uint16_t> Feedforward_2nd_Gain_arr = arr[0]["Feedforward_2nd_Gain"];
        msg->Feedforward_2nd_Gain = Feedforward_2nd_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Feedforward_2nd_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Feedforward_2nd_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Feedforward_1st_Gain
        const matlab::data::TypedArray<uint16_t> Feedforward_1st_Gain_arr = arr[0]["Feedforward_1st_Gain"];
        msg->Feedforward_1st_Gain = Feedforward_1st_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Feedforward_1st_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Feedforward_1st_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Bus_Watchdog
        const matlab::data::TypedArray<uint8_t> Bus_Watchdog_arr = arr[0]["Bus_Watchdog"];
        msg->Bus_Watchdog = Bus_Watchdog_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Bus_Watchdog' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Bus_Watchdog' is wrong type; expected a uint8.");
    }
    try {
        //Goal_PWM
        const matlab::data::TypedArray<int16_t> Goal_PWM_arr = arr[0]["Goal_PWM"];
        msg->Goal_PWM = Goal_PWM_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_PWM' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_PWM' is wrong type; expected a int16.");
    }
    try {
        //Goal_Velocity
        const matlab::data::TypedArray<int32_t> Goal_Velocity_arr = arr[0]["Goal_Velocity"];
        msg->Goal_Velocity = Goal_Velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Velocity' is wrong type; expected a int32.");
    }
    try {
        //Profile_Acceleration
        const matlab::data::TypedArray<uint32_t> Profile_Acceleration_arr = arr[0]["Profile_Acceleration"];
        msg->Profile_Acceleration = Profile_Acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Profile_Acceleration' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Profile_Acceleration' is wrong type; expected a uint32.");
    }
    try {
        //Profile_Velocity
        const matlab::data::TypedArray<uint32_t> Profile_Velocity_arr = arr[0]["Profile_Velocity"];
        msg->Profile_Velocity = Profile_Velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Profile_Velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Profile_Velocity' is wrong type; expected a uint32.");
    }
    try {
        //Goal_Position
        const matlab::data::TypedArray<uint32_t> Goal_Position_arr = arr[0]["Goal_Position"];
        msg->Goal_Position = Goal_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Position' is wrong type; expected a uint32.");
    }
    try {
        //Realtime_Tick
        const matlab::data::TypedArray<uint16_t> Realtime_Tick_arr = arr[0]["Realtime_Tick"];
        msg->Realtime_Tick = Realtime_Tick_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Realtime_Tick' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Realtime_Tick' is wrong type; expected a uint16.");
    }
    try {
        //Moving
        const matlab::data::TypedArray<uint8_t> Moving_arr = arr[0]["Moving"];
        msg->Moving = Moving_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Moving' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Moving' is wrong type; expected a uint8.");
    }
    try {
        //Moving_Status
        const matlab::data::TypedArray<uint8_t> Moving_Status_arr = arr[0]["Moving_Status"];
        msg->Moving_Status = Moving_Status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Moving_Status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Moving_Status' is wrong type; expected a uint8.");
    }
    try {
        //Present_PWM
        const matlab::data::TypedArray<int16_t> Present_PWM_arr = arr[0]["Present_PWM"];
        msg->Present_PWM = Present_PWM_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_PWM' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_PWM' is wrong type; expected a int16.");
    }
    try {
        //Present_Load
        const matlab::data::TypedArray<int16_t> Present_Load_arr = arr[0]["Present_Load"];
        msg->Present_Load = Present_Load_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Load' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Load' is wrong type; expected a int16.");
    }
    try {
        //Present_Velocity
        const matlab::data::TypedArray<int32_t> Present_Velocity_arr = arr[0]["Present_Velocity"];
        msg->Present_Velocity = Present_Velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Velocity' is wrong type; expected a int32.");
    }
    try {
        //Present_Position
        const matlab::data::TypedArray<int32_t> Present_Position_arr = arr[0]["Present_Position"];
        msg->Present_Position = Present_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Position' is wrong type; expected a int32.");
    }
    try {
        //Velocity_Trajectory
        const matlab::data::TypedArray<uint32_t> Velocity_Trajectory_arr = arr[0]["Velocity_Trajectory"];
        msg->Velocity_Trajectory = Velocity_Trajectory_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Velocity_Trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Velocity_Trajectory' is wrong type; expected a uint32.");
    }
    try {
        //Position_Trajectory
        const matlab::data::TypedArray<uint32_t> Position_Trajectory_arr = arr[0]["Position_Trajectory"];
        msg->Position_Trajectory = Position_Trajectory_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position_Trajectory' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Position_Trajectory' is wrong type; expected a uint32.");
    }
    try {
        //Present_Input_Voltage
        const matlab::data::TypedArray<uint16_t> Present_Input_Voltage_arr = arr[0]["Present_Input_Voltage"];
        msg->Present_Input_Voltage = Present_Input_Voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Input_Voltage' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Input_Voltage' is wrong type; expected a uint16.");
    }
    try {
        //Present_Temperature
        const matlab::data::TypedArray<uint8_t> Present_Temperature_arr = arr[0]["Present_Temperature"];
        msg->Present_Temperature = Present_Temperature_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Temperature' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Temperature' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const dynamixel_workbench_msgs::MX2>& msg) {
    auto outArray = factory.createStructArray({1,1},{"Model_Number","Firmware_Version","ID","Baud_Rate","Return_Delay_Time","Drive_Mode","Operating_Mode","Secondary_ID","Protocol_Version","Homing_Offset","Moving_Threshold","Temperature_Limit","Max_Voltage_Limit","Min_Voltage_Limit","PWM_Limit","Acceleration_Limit","Velocity_Limit","Max_Position_Limit","Min_Position_Limit","Shutdown","Torque_Enable","LED","Status_Return_Level","Registered_Instruction","Hardware_Error_Status","Velocity_I_Gain","Velocity_P_Gain","Position_D_Gain","Position_I_Gain","Position_P_Gain","Feedforward_2nd_Gain","Feedforward_1st_Gain","Bus_Watchdog","Goal_PWM","Goal_Velocity","Profile_Acceleration","Profile_Velocity","Goal_Position","Realtime_Tick","Moving","Moving_Status","Present_PWM","Present_Load","Present_Velocity","Present_Position","Velocity_Trajectory","Position_Trajectory","Present_Input_Voltage","Present_Temperature"});
    // Model_Number
    outArray[0]["Model_Number"] = factory.createScalar(msg->Model_Number);
    // Firmware_Version
    outArray[0]["Firmware_Version"] = factory.createScalar(msg->Firmware_Version);
    // ID
    outArray[0]["ID"] = factory.createScalar(msg->ID);
    // Baud_Rate
    outArray[0]["Baud_Rate"] = factory.createScalar(msg->Baud_Rate);
    // Return_Delay_Time
    outArray[0]["Return_Delay_Time"] = factory.createScalar(msg->Return_Delay_Time);
    // Drive_Mode
    outArray[0]["Drive_Mode"] = factory.createScalar(msg->Drive_Mode);
    // Operating_Mode
    outArray[0]["Operating_Mode"] = factory.createScalar(msg->Operating_Mode);
    // Secondary_ID
    outArray[0]["Secondary_ID"] = factory.createScalar(msg->Secondary_ID);
    // Protocol_Version
    outArray[0]["Protocol_Version"] = factory.createScalar(msg->Protocol_Version);
    // Homing_Offset
    outArray[0]["Homing_Offset"] = factory.createScalar(msg->Homing_Offset);
    // Moving_Threshold
    outArray[0]["Moving_Threshold"] = factory.createScalar(msg->Moving_Threshold);
    // Temperature_Limit
    outArray[0]["Temperature_Limit"] = factory.createScalar(msg->Temperature_Limit);
    // Max_Voltage_Limit
    outArray[0]["Max_Voltage_Limit"] = factory.createScalar(msg->Max_Voltage_Limit);
    // Min_Voltage_Limit
    outArray[0]["Min_Voltage_Limit"] = factory.createScalar(msg->Min_Voltage_Limit);
    // PWM_Limit
    outArray[0]["PWM_Limit"] = factory.createScalar(msg->PWM_Limit);
    // Acceleration_Limit
    outArray[0]["Acceleration_Limit"] = factory.createScalar(msg->Acceleration_Limit);
    // Velocity_Limit
    outArray[0]["Velocity_Limit"] = factory.createScalar(msg->Velocity_Limit);
    // Max_Position_Limit
    outArray[0]["Max_Position_Limit"] = factory.createScalar(msg->Max_Position_Limit);
    // Min_Position_Limit
    outArray[0]["Min_Position_Limit"] = factory.createScalar(msg->Min_Position_Limit);
    // Shutdown
    outArray[0]["Shutdown"] = factory.createScalar(msg->Shutdown);
    // Torque_Enable
    outArray[0]["Torque_Enable"] = factory.createScalar(msg->Torque_Enable);
    // LED
    outArray[0]["LED"] = factory.createScalar(msg->LED);
    // Status_Return_Level
    outArray[0]["Status_Return_Level"] = factory.createScalar(msg->Status_Return_Level);
    // Registered_Instruction
    outArray[0]["Registered_Instruction"] = factory.createScalar(msg->Registered_Instruction);
    // Hardware_Error_Status
    outArray[0]["Hardware_Error_Status"] = factory.createScalar(msg->Hardware_Error_Status);
    // Velocity_I_Gain
    outArray[0]["Velocity_I_Gain"] = factory.createScalar(msg->Velocity_I_Gain);
    // Velocity_P_Gain
    outArray[0]["Velocity_P_Gain"] = factory.createScalar(msg->Velocity_P_Gain);
    // Position_D_Gain
    outArray[0]["Position_D_Gain"] = factory.createScalar(msg->Position_D_Gain);
    // Position_I_Gain
    outArray[0]["Position_I_Gain"] = factory.createScalar(msg->Position_I_Gain);
    // Position_P_Gain
    outArray[0]["Position_P_Gain"] = factory.createScalar(msg->Position_P_Gain);
    // Feedforward_2nd_Gain
    outArray[0]["Feedforward_2nd_Gain"] = factory.createScalar(msg->Feedforward_2nd_Gain);
    // Feedforward_1st_Gain
    outArray[0]["Feedforward_1st_Gain"] = factory.createScalar(msg->Feedforward_1st_Gain);
    // Bus_Watchdog
    outArray[0]["Bus_Watchdog"] = factory.createScalar(msg->Bus_Watchdog);
    // Goal_PWM
    outArray[0]["Goal_PWM"] = factory.createScalar(msg->Goal_PWM);
    // Goal_Velocity
    outArray[0]["Goal_Velocity"] = factory.createScalar(msg->Goal_Velocity);
    // Profile_Acceleration
    outArray[0]["Profile_Acceleration"] = factory.createScalar(msg->Profile_Acceleration);
    // Profile_Velocity
    outArray[0]["Profile_Velocity"] = factory.createScalar(msg->Profile_Velocity);
    // Goal_Position
    outArray[0]["Goal_Position"] = factory.createScalar(msg->Goal_Position);
    // Realtime_Tick
    outArray[0]["Realtime_Tick"] = factory.createScalar(msg->Realtime_Tick);
    // Moving
    outArray[0]["Moving"] = factory.createScalar(msg->Moving);
    // Moving_Status
    outArray[0]["Moving_Status"] = factory.createScalar(msg->Moving_Status);
    // Present_PWM
    outArray[0]["Present_PWM"] = factory.createScalar(msg->Present_PWM);
    // Present_Load
    outArray[0]["Present_Load"] = factory.createScalar(msg->Present_Load);
    // Present_Velocity
    outArray[0]["Present_Velocity"] = factory.createScalar(msg->Present_Velocity);
    // Present_Position
    outArray[0]["Present_Position"] = factory.createScalar(msg->Present_Position);
    // Velocity_Trajectory
    outArray[0]["Velocity_Trajectory"] = factory.createScalar(msg->Velocity_Trajectory);
    // Position_Trajectory
    outArray[0]["Position_Trajectory"] = factory.createScalar(msg->Position_Trajectory);
    // Present_Input_Voltage
    outArray[0]["Present_Input_Voltage"] = factory.createScalar(msg->Present_Input_Voltage);
    // Present_Temperature
    outArray[0]["Present_Temperature"] = factory.createScalar(msg->Present_Temperature);
    return std::move(outArray);
  }
} //namespace MX2
} //namespace matlabhelper
} //namespace dynamixel_workbench_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for dynamixel_workbench_msgs/PRO
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
#include "dynamixel_workbench_msgs/PRO.h"
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
namespace PRO {
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<dynamixel_workbench_msgs::PRO>& msg, const matlab::data::StructArray arr) {
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
        //Operating_Mode
        const matlab::data::TypedArray<uint8_t> Operating_Mode_arr = arr[0]["Operating_Mode"];
        msg->Operating_Mode = Operating_Mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Operating_Mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Operating_Mode' is wrong type; expected a uint8.");
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
        //Acceleration_Limit
        const matlab::data::TypedArray<uint32_t> Acceleration_Limit_arr = arr[0]["Acceleration_Limit"];
        msg->Acceleration_Limit = Acceleration_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Acceleration_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Acceleration_Limit' is wrong type; expected a uint32.");
    }
    try {
        //Torque_Limit
        const matlab::data::TypedArray<uint16_t> Torque_Limit_arr = arr[0]["Torque_Limit"];
        msg->Torque_Limit = Torque_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Torque_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Torque_Limit' is wrong type; expected a uint16.");
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
        const matlab::data::TypedArray<int32_t> Max_Position_Limit_arr = arr[0]["Max_Position_Limit"];
        msg->Max_Position_Limit = Max_Position_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Max_Position_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Max_Position_Limit' is wrong type; expected a int32.");
    }
    try {
        //Min_Position_Limit
        const matlab::data::TypedArray<int32_t> Min_Position_Limit_arr = arr[0]["Min_Position_Limit"];
        msg->Min_Position_Limit = Min_Position_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Min_Position_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Min_Position_Limit' is wrong type; expected a int32.");
    }
    try {
        //External_Port_Mode_1
        const matlab::data::TypedArray<uint8_t> External_Port_Mode_1_arr = arr[0]["External_Port_Mode_1"];
        msg->External_Port_Mode_1 = External_Port_Mode_1_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_1' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_1' is wrong type; expected a uint8.");
    }
    try {
        //External_Port_Mode_2
        const matlab::data::TypedArray<uint8_t> External_Port_Mode_2_arr = arr[0]["External_Port_Mode_2"];
        msg->External_Port_Mode_2 = External_Port_Mode_2_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_2' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_2' is wrong type; expected a uint8.");
    }
    try {
        //External_Port_Mode_3
        const matlab::data::TypedArray<uint8_t> External_Port_Mode_3_arr = arr[0]["External_Port_Mode_3"];
        msg->External_Port_Mode_3 = External_Port_Mode_3_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_3' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_3' is wrong type; expected a uint8.");
    }
    try {
        //External_Port_Mode_4
        const matlab::data::TypedArray<uint8_t> External_Port_Mode_4_arr = arr[0]["External_Port_Mode_4"];
        msg->External_Port_Mode_4 = External_Port_Mode_4_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_4' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'External_Port_Mode_4' is wrong type; expected a uint8.");
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
        //LED_RED
        const matlab::data::TypedArray<uint8_t> LED_RED_arr = arr[0]["LED_RED"];
        msg->LED_RED = LED_RED_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LED_RED' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'LED_RED' is wrong type; expected a uint8.");
    }
    try {
        //LED_GREEN
        const matlab::data::TypedArray<uint8_t> LED_GREEN_arr = arr[0]["LED_GREEN"];
        msg->LED_GREEN = LED_GREEN_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LED_GREEN' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'LED_GREEN' is wrong type; expected a uint8.");
    }
    try {
        //LED_BLUE
        const matlab::data::TypedArray<uint8_t> LED_BLUE_arr = arr[0]["LED_BLUE"];
        msg->LED_BLUE = LED_BLUE_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'LED_BLUE' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'LED_BLUE' is wrong type; expected a uint8.");
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
        //Position_P_Gain
        const matlab::data::TypedArray<uint16_t> Position_P_Gain_arr = arr[0]["Position_P_Gain"];
        msg->Position_P_Gain = Position_P_Gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Position_P_Gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Position_P_Gain' is wrong type; expected a uint16.");
    }
    try {
        //Goal_Position
        const matlab::data::TypedArray<int32_t> Goal_Position_arr = arr[0]["Goal_Position"];
        msg->Goal_Position = Goal_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Position' is wrong type; expected a int32.");
    }
    try {
        //Goal_Velocity
        const matlab::data::TypedArray<uint32_t> Goal_Velocity_arr = arr[0]["Goal_Velocity"];
        msg->Goal_Velocity = Goal_Velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Velocity' is wrong type; expected a uint32.");
    }
    try {
        //Goal_Torque
        const matlab::data::TypedArray<uint16_t> Goal_Torque_arr = arr[0]["Goal_Torque"];
        msg->Goal_Torque = Goal_Torque_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Torque' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Torque' is wrong type; expected a uint16.");
    }
    try {
        //Goal_Acceleration
        const matlab::data::TypedArray<int32_t> Goal_Acceleration_arr = arr[0]["Goal_Acceleration"];
        msg->Goal_Acceleration = Goal_Acceleration_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Acceleration' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Acceleration' is wrong type; expected a int32.");
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
        //Present_Position
        const matlab::data::TypedArray<int32_t> Present_Position_arr = arr[0]["Present_Position"];
        msg->Present_Position = Present_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Position' is wrong type; expected a int32.");
    }
    try {
        //Present_Velocity
        const matlab::data::TypedArray<uint32_t> Present_Velocity_arr = arr[0]["Present_Velocity"];
        msg->Present_Velocity = Present_Velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Velocity' is wrong type; expected a uint32.");
    }
    try {
        //Present_Current
        const matlab::data::TypedArray<uint16_t> Present_Current_arr = arr[0]["Present_Current"];
        msg->Present_Current = Present_Current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Current' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Current' is wrong type; expected a uint16.");
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
        //Status_Return_Level
        const matlab::data::TypedArray<uint8_t> Status_Return_Level_arr = arr[0]["Status_Return_Level"];
        msg->Status_Return_Level = Status_Return_Level_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Status_Return_Level' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Status_Return_Level' is wrong type; expected a uint8.");
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
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const dynamixel_workbench_msgs::PRO>& msg) {
    auto outArray = factory.createStructArray({1,1},{"Model_Number","Firmware_Version","ID","Baud_Rate","Return_Delay_Time","Operating_Mode","Moving_Threshold","Temperature_Limit","Max_Voltage_Limit","Min_Voltage_Limit","Acceleration_Limit","Torque_Limit","Velocity_Limit","Max_Position_Limit","Min_Position_Limit","External_Port_Mode_1","External_Port_Mode_2","External_Port_Mode_3","External_Port_Mode_4","Shutdown","Torque_Enable","LED_RED","LED_GREEN","LED_BLUE","Velocity_I_Gain","Velocity_P_Gain","Position_P_Gain","Goal_Position","Goal_Velocity","Goal_Torque","Goal_Acceleration","Moving","Present_Position","Present_Velocity","Present_Current","Present_Input_Voltage","Present_Temperature","Registered_Instruction","Status_Return_Level","Hardware_Error_Status"});
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
    // Operating_Mode
    outArray[0]["Operating_Mode"] = factory.createScalar(msg->Operating_Mode);
    // Moving_Threshold
    outArray[0]["Moving_Threshold"] = factory.createScalar(msg->Moving_Threshold);
    // Temperature_Limit
    outArray[0]["Temperature_Limit"] = factory.createScalar(msg->Temperature_Limit);
    // Max_Voltage_Limit
    outArray[0]["Max_Voltage_Limit"] = factory.createScalar(msg->Max_Voltage_Limit);
    // Min_Voltage_Limit
    outArray[0]["Min_Voltage_Limit"] = factory.createScalar(msg->Min_Voltage_Limit);
    // Acceleration_Limit
    outArray[0]["Acceleration_Limit"] = factory.createScalar(msg->Acceleration_Limit);
    // Torque_Limit
    outArray[0]["Torque_Limit"] = factory.createScalar(msg->Torque_Limit);
    // Velocity_Limit
    outArray[0]["Velocity_Limit"] = factory.createScalar(msg->Velocity_Limit);
    // Max_Position_Limit
    outArray[0]["Max_Position_Limit"] = factory.createScalar(msg->Max_Position_Limit);
    // Min_Position_Limit
    outArray[0]["Min_Position_Limit"] = factory.createScalar(msg->Min_Position_Limit);
    // External_Port_Mode_1
    outArray[0]["External_Port_Mode_1"] = factory.createScalar(msg->External_Port_Mode_1);
    // External_Port_Mode_2
    outArray[0]["External_Port_Mode_2"] = factory.createScalar(msg->External_Port_Mode_2);
    // External_Port_Mode_3
    outArray[0]["External_Port_Mode_3"] = factory.createScalar(msg->External_Port_Mode_3);
    // External_Port_Mode_4
    outArray[0]["External_Port_Mode_4"] = factory.createScalar(msg->External_Port_Mode_4);
    // Shutdown
    outArray[0]["Shutdown"] = factory.createScalar(msg->Shutdown);
    // Torque_Enable
    outArray[0]["Torque_Enable"] = factory.createScalar(msg->Torque_Enable);
    // LED_RED
    outArray[0]["LED_RED"] = factory.createScalar(msg->LED_RED);
    // LED_GREEN
    outArray[0]["LED_GREEN"] = factory.createScalar(msg->LED_GREEN);
    // LED_BLUE
    outArray[0]["LED_BLUE"] = factory.createScalar(msg->LED_BLUE);
    // Velocity_I_Gain
    outArray[0]["Velocity_I_Gain"] = factory.createScalar(msg->Velocity_I_Gain);
    // Velocity_P_Gain
    outArray[0]["Velocity_P_Gain"] = factory.createScalar(msg->Velocity_P_Gain);
    // Position_P_Gain
    outArray[0]["Position_P_Gain"] = factory.createScalar(msg->Position_P_Gain);
    // Goal_Position
    outArray[0]["Goal_Position"] = factory.createScalar(msg->Goal_Position);
    // Goal_Velocity
    outArray[0]["Goal_Velocity"] = factory.createScalar(msg->Goal_Velocity);
    // Goal_Torque
    outArray[0]["Goal_Torque"] = factory.createScalar(msg->Goal_Torque);
    // Goal_Acceleration
    outArray[0]["Goal_Acceleration"] = factory.createScalar(msg->Goal_Acceleration);
    // Moving
    outArray[0]["Moving"] = factory.createScalar(msg->Moving);
    // Present_Position
    outArray[0]["Present_Position"] = factory.createScalar(msg->Present_Position);
    // Present_Velocity
    outArray[0]["Present_Velocity"] = factory.createScalar(msg->Present_Velocity);
    // Present_Current
    outArray[0]["Present_Current"] = factory.createScalar(msg->Present_Current);
    // Present_Input_Voltage
    outArray[0]["Present_Input_Voltage"] = factory.createScalar(msg->Present_Input_Voltage);
    // Present_Temperature
    outArray[0]["Present_Temperature"] = factory.createScalar(msg->Present_Temperature);
    // Registered_Instruction
    outArray[0]["Registered_Instruction"] = factory.createScalar(msg->Registered_Instruction);
    // Status_Return_Level
    outArray[0]["Status_Return_Level"] = factory.createScalar(msg->Status_Return_Level);
    // Hardware_Error_Status
    outArray[0]["Hardware_Error_Status"] = factory.createScalar(msg->Hardware_Error_Status);
    return std::move(outArray);
  }
} //namespace PRO
} //namespace matlabhelper
} //namespace dynamixel_workbench_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
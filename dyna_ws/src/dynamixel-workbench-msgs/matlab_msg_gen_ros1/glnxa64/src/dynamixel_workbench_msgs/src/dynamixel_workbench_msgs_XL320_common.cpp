// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for dynamixel_workbench_msgs/XL320
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
#include "dynamixel_workbench_msgs/XL320.h"
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
namespace XL320 {
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<dynamixel_workbench_msgs::XL320>& msg, const matlab::data::StructArray arr) {
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
        //CW_Angle_Limit
        const matlab::data::TypedArray<uint16_t> CW_Angle_Limit_arr = arr[0]["CW_Angle_Limit"];
        msg->CW_Angle_Limit = CW_Angle_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CW_Angle_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'CW_Angle_Limit' is wrong type; expected a uint16.");
    }
    try {
        //CCW_Angle_Limit
        const matlab::data::TypedArray<uint16_t> CCW_Angle_Limit_arr = arr[0]["CCW_Angle_Limit"];
        msg->CCW_Angle_Limit = CCW_Angle_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'CCW_Angle_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'CCW_Angle_Limit' is wrong type; expected a uint16.");
    }
    try {
        //Control_Mode
        const matlab::data::TypedArray<uint8_t> Control_Mode_arr = arr[0]["Control_Mode"];
        msg->Control_Mode = Control_Mode_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Control_Mode' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Control_Mode' is wrong type; expected a uint8.");
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
        //Min_Voltage_Limit
        const matlab::data::TypedArray<uint8_t> Min_Voltage_Limit_arr = arr[0]["Min_Voltage_Limit"];
        msg->Min_Voltage_Limit = Min_Voltage_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Min_Voltage_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Min_Voltage_Limit' is wrong type; expected a uint8.");
    }
    try {
        //Max_Voltage_Limit
        const matlab::data::TypedArray<uint8_t> Max_Voltage_Limit_arr = arr[0]["Max_Voltage_Limit"];
        msg->Max_Voltage_Limit = Max_Voltage_Limit_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Max_Voltage_Limit' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Max_Voltage_Limit' is wrong type; expected a uint8.");
    }
    try {
        //Max_Torque
        const matlab::data::TypedArray<uint16_t> Max_Torque_arr = arr[0]["Max_Torque"];
        msg->Max_Torque = Max_Torque_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Max_Torque' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Max_Torque' is wrong type; expected a uint16.");
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
        //D_gain
        const matlab::data::TypedArray<uint8_t> D_gain_arr = arr[0]["D_gain"];
        msg->D_gain = D_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'D_gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'D_gain' is wrong type; expected a uint8.");
    }
    try {
        //I_gain
        const matlab::data::TypedArray<uint8_t> I_gain_arr = arr[0]["I_gain"];
        msg->I_gain = I_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'I_gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'I_gain' is wrong type; expected a uint8.");
    }
    try {
        //P_gain
        const matlab::data::TypedArray<uint8_t> P_gain_arr = arr[0]["P_gain"];
        msg->P_gain = P_gain_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'P_gain' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'P_gain' is wrong type; expected a uint8.");
    }
    try {
        //Goal_Position
        const matlab::data::TypedArray<uint16_t> Goal_Position_arr = arr[0]["Goal_Position"];
        msg->Goal_Position = Goal_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Goal_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Goal_Position' is wrong type; expected a uint16.");
    }
    try {
        //Moving_Speed
        const matlab::data::TypedArray<uint16_t> Moving_Speed_arr = arr[0]["Moving_Speed"];
        msg->Moving_Speed = Moving_Speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Moving_Speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Moving_Speed' is wrong type; expected a uint16.");
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
        //Present_Position
        const matlab::data::TypedArray<uint16_t> Present_Position_arr = arr[0]["Present_Position"];
        msg->Present_Position = Present_Position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Position' is wrong type; expected a uint16.");
    }
    try {
        //Present_Speed
        const matlab::data::TypedArray<uint16_t> Present_Speed_arr = arr[0]["Present_Speed"];
        msg->Present_Speed = Present_Speed_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Speed' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Speed' is wrong type; expected a uint16.");
    }
    try {
        //Present_Load
        const matlab::data::TypedArray<uint16_t> Present_Load_arr = arr[0]["Present_Load"];
        msg->Present_Load = Present_Load_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Load' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Load' is wrong type; expected a uint16.");
    }
    try {
        //Present_Voltage
        const matlab::data::TypedArray<uint8_t> Present_Voltage_arr = arr[0]["Present_Voltage"];
        msg->Present_Voltage = Present_Voltage_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Present_Voltage' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Present_Voltage' is wrong type; expected a uint8.");
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
        //Registered
        const matlab::data::TypedArray<uint8_t> Registered_arr = arr[0]["Registered"];
        msg->Registered = Registered_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Registered' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Registered' is wrong type; expected a uint8.");
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
        //Hardware_Error_Status
        const matlab::data::TypedArray<uint8_t> Hardware_Error_Status_arr = arr[0]["Hardware_Error_Status"];
        msg->Hardware_Error_Status = Hardware_Error_Status_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Hardware_Error_Status' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Hardware_Error_Status' is wrong type; expected a uint8.");
    }
    try {
        //Punch
        const matlab::data::TypedArray<uint16_t> Punch_arr = arr[0]["Punch"];
        msg->Punch = Punch_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'Punch' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'Punch' is wrong type; expected a uint16.");
    }
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const dynamixel_workbench_msgs::XL320>& msg) {
    auto outArray = factory.createStructArray({1,1},{"Model_Number","Firmware_Version","ID","Baud_Rate","Return_Delay_Time","CW_Angle_Limit","CCW_Angle_Limit","Control_Mode","Temperature_Limit","Min_Voltage_Limit","Max_Voltage_Limit","Max_Torque","Status_Return_Level","Shutdown","Torque_Enable","LED","D_gain","I_gain","P_gain","Goal_Position","Moving_Speed","Torque_Limit","Present_Position","Present_Speed","Present_Load","Present_Voltage","Present_Temperature","Registered","Moving","Hardware_Error_Status","Punch"});
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
    // CW_Angle_Limit
    outArray[0]["CW_Angle_Limit"] = factory.createScalar(msg->CW_Angle_Limit);
    // CCW_Angle_Limit
    outArray[0]["CCW_Angle_Limit"] = factory.createScalar(msg->CCW_Angle_Limit);
    // Control_Mode
    outArray[0]["Control_Mode"] = factory.createScalar(msg->Control_Mode);
    // Temperature_Limit
    outArray[0]["Temperature_Limit"] = factory.createScalar(msg->Temperature_Limit);
    // Min_Voltage_Limit
    outArray[0]["Min_Voltage_Limit"] = factory.createScalar(msg->Min_Voltage_Limit);
    // Max_Voltage_Limit
    outArray[0]["Max_Voltage_Limit"] = factory.createScalar(msg->Max_Voltage_Limit);
    // Max_Torque
    outArray[0]["Max_Torque"] = factory.createScalar(msg->Max_Torque);
    // Status_Return_Level
    outArray[0]["Status_Return_Level"] = factory.createScalar(msg->Status_Return_Level);
    // Shutdown
    outArray[0]["Shutdown"] = factory.createScalar(msg->Shutdown);
    // Torque_Enable
    outArray[0]["Torque_Enable"] = factory.createScalar(msg->Torque_Enable);
    // LED
    outArray[0]["LED"] = factory.createScalar(msg->LED);
    // D_gain
    outArray[0]["D_gain"] = factory.createScalar(msg->D_gain);
    // I_gain
    outArray[0]["I_gain"] = factory.createScalar(msg->I_gain);
    // P_gain
    outArray[0]["P_gain"] = factory.createScalar(msg->P_gain);
    // Goal_Position
    outArray[0]["Goal_Position"] = factory.createScalar(msg->Goal_Position);
    // Moving_Speed
    outArray[0]["Moving_Speed"] = factory.createScalar(msg->Moving_Speed);
    // Torque_Limit
    outArray[0]["Torque_Limit"] = factory.createScalar(msg->Torque_Limit);
    // Present_Position
    outArray[0]["Present_Position"] = factory.createScalar(msg->Present_Position);
    // Present_Speed
    outArray[0]["Present_Speed"] = factory.createScalar(msg->Present_Speed);
    // Present_Load
    outArray[0]["Present_Load"] = factory.createScalar(msg->Present_Load);
    // Present_Voltage
    outArray[0]["Present_Voltage"] = factory.createScalar(msg->Present_Voltage);
    // Present_Temperature
    outArray[0]["Present_Temperature"] = factory.createScalar(msg->Present_Temperature);
    // Registered
    outArray[0]["Registered"] = factory.createScalar(msg->Registered);
    // Moving
    outArray[0]["Moving"] = factory.createScalar(msg->Moving);
    // Hardware_Error_Status
    outArray[0]["Hardware_Error_Status"] = factory.createScalar(msg->Hardware_Error_Status);
    // Punch
    outArray[0]["Punch"] = factory.createScalar(msg->Punch);
    return std::move(outArray);
  }
} //namespace XL320
} //namespace matlabhelper
} //namespace dynamixel_workbench_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
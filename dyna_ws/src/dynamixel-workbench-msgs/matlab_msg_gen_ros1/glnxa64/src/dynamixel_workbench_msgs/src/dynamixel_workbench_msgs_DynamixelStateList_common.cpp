// Copyright 2019-2020 The MathWorks, Inc.
// Common copy functions for dynamixel_workbench_msgs/DynamixelStateList
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
#include "dynamixel_workbench_msgs/DynamixelStateList.h"
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
namespace DynamixelStateList {
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(dynamixel_workbench_msgs::DynamixelState& val, const matlab::data::Struct& arr);
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(MDFactory_T& factory, const dynamixel_workbench_msgs::DynamixelStateList::_dynamixel_state_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(dynamixel_workbench_msgs::DynamixelState& val, const matlab::data::Struct& arr) {
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.name
    try {
        const matlab::data::CharArray _dynamixel_statename_arr = arr["name"];
        val.name = _dynamixel_statename_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'name' is wrong type; expected a string.");
    }
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.id
    try {
        const matlab::data::TypedArray<uint8_t> _dynamixel_stateid_arr = arr["id"];
        val.id = _dynamixel_stateid_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'id' is wrong type; expected a uint8.");
    }
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_position
    try {
        const matlab::data::TypedArray<int32_t> _dynamixel_statepresent_position_arr = arr["present_position"];
        val.present_position = _dynamixel_statepresent_position_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'present_position' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'present_position' is wrong type; expected a int32.");
    }
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_velocity
    try {
        const matlab::data::TypedArray<int32_t> _dynamixel_statepresent_velocity_arr = arr["present_velocity"];
        val.present_velocity = _dynamixel_statepresent_velocity_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'present_velocity' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'present_velocity' is wrong type; expected a int32.");
    }
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_current
    try {
        const matlab::data::TypedArray<int16_t> _dynamixel_statepresent_current_arr = arr["present_current"];
        val.present_current = _dynamixel_statepresent_current_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'present_current' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'present_current' is wrong type; expected a int16.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(MDFactory_T& factory, const dynamixel_workbench_msgs::DynamixelStateList::_dynamixel_state_type& val) {
    auto _dynamixel_stateoutArray = factory.createStructArray({1,val.size()},{"name","id","present_position","present_velocity","present_current"});
    for (size_t idx = 0; idx < val.size(); ++idx){
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.name
    	_dynamixel_stateoutArray[idx]["name"] = factory.createCharArray(val[idx].name);
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.id
    	_dynamixel_stateoutArray[idx]["id"] = factory.createScalar(val[idx].id);
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_position
    	_dynamixel_stateoutArray[idx]["present_position"] = factory.createScalar(val[idx].present_position);
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_velocity
    	_dynamixel_stateoutArray[idx]["present_velocity"] = factory.createScalar(val[idx].present_velocity);
    // _dynamixel_workbench_msgs_DynamixelState_var_arr.present_current
    	_dynamixel_stateoutArray[idx]["present_current"] = factory.createScalar(val[idx].present_current);
    }
    return std::move(_dynamixel_stateoutArray);
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT void copy_from_arr(boost::shared_ptr<dynamixel_workbench_msgs::DynamixelStateList>& msg, const matlab::data::StructArray arr) {
    try {
        //dynamixel_state
        const matlab::data::StructArray dynamixel_state_arr = arr[0]["dynamixel_state"];
        for (auto _dynamixel_statearr : dynamixel_state_arr) {
        	dynamixel_workbench_msgs::DynamixelState _val;
        	copy_from_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(_val,_dynamixel_statearr);
        	msg->dynamixel_state.push_back(_val);
        }
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dynamixel_state' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dynamixel_state' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const boost::shared_ptr<const dynamixel_workbench_msgs::DynamixelStateList>& msg) {
    auto outArray = factory.createStructArray({1,1},{"dynamixel_state"});
    // dynamixel_state
    outArray[0]["dynamixel_state"] = get_arr_dynamixel_workbench_msgs_DynamixelState_var_arr(factory, msg->dynamixel_state);
    return std::move(outArray);
  }
} //namespace DynamixelStateList
} //namespace matlabhelper
} //namespace dynamixel_workbench_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
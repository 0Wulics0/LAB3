// Copyright 2020 The MathWorks, Inc.
// Common copy functions of server for dynamixel_workbench_msgs/GetDynamixelInfoResponse
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
#include "dynamixel_workbench_msgs/GetDynamixelInfo.h"
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
namespace GetDynamixelInfo_Response {
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelInfo(dynamixel_workbench_msgs::DynamixelInfo& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelInfo(MDFactory_T& factory, const dynamixel_workbench_msgs::GetDynamixelInfo::Response::_dynamixel_info_type& val);
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(dynamixel_workbench_msgs::DynamixelLoadInfo& val, const matlab::data::StructArray& arr);
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(MDFactory_T& factory, const dynamixel_workbench_msgs::DynamixelInfo::_load_info_type& val);
  //----------------------------------------------------------------------------
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelInfo(dynamixel_workbench_msgs::DynamixelInfo& val, const matlab::data::StructArray& arr) {
    // _dynamixel_workbench_msgs_DynamixelInfo.load_info
    try {
        const matlab::data::StructArray _dynamixel_infoload_info_arr = arr[0]["load_info"];
        copy_from_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(val.load_info,_dynamixel_infoload_info_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'load_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'load_info' is wrong type; expected a struct.");
    }
    // _dynamixel_workbench_msgs_DynamixelInfo.model_name
    try {
        const matlab::data::CharArray _dynamixel_infomodel_name_arr = arr[0]["model_name"];
        val.model_name = _dynamixel_infomodel_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'model_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'model_name' is wrong type; expected a string.");
    }
    // _dynamixel_workbench_msgs_DynamixelInfo.model_number
    try {
        const matlab::data::TypedArray<uint16_t> _dynamixel_infomodel_number_arr = arr[0]["model_number"];
        val.model_number = _dynamixel_infomodel_number_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'model_number' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'model_number' is wrong type; expected a uint16.");
    }
    // _dynamixel_workbench_msgs_DynamixelInfo.model_id
    try {
        const matlab::data::TypedArray<uint8_t> _dynamixel_infomodel_id_arr = arr[0]["model_id"];
        val.model_id = _dynamixel_infomodel_id_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'model_id' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'model_id' is wrong type; expected a uint8.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelInfo(MDFactory_T& factory, const dynamixel_workbench_msgs::GetDynamixelInfo::Response::_dynamixel_info_type& val) {
    auto _dynamixel_infooutArray = factory.createStructArray({1,1},{"load_info","model_name","model_number","model_id"});
    // _dynamixel_workbench_msgs_DynamixelInfo.load_info
    _dynamixel_infooutArray[0]["load_info"] = get_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(factory, val.load_info);
    // _dynamixel_workbench_msgs_DynamixelInfo.model_name
    _dynamixel_infooutArray[0]["model_name"] = factory.createCharArray(val.model_name);
    // _dynamixel_workbench_msgs_DynamixelInfo.model_number
    _dynamixel_infooutArray[0]["model_number"] = factory.createScalar(val.model_number);
    // _dynamixel_workbench_msgs_DynamixelInfo.model_id
    _dynamixel_infooutArray[0]["model_id"] = factory.createScalar(val.model_id);
    return std::move(_dynamixel_infooutArray);
  }
  //----------------------------------------------------------------------------
  void copy_from_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(dynamixel_workbench_msgs::DynamixelLoadInfo& val, const matlab::data::StructArray& arr) {
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.device_name
    try {
        const matlab::data::CharArray _dynamixel_info_load_infodevice_name_arr = arr[0]["device_name"];
        val.device_name = _dynamixel_info_load_infodevice_name_arr.toAscii();
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'device_name' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'device_name' is wrong type; expected a string.");
    }
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.baud_rate
    try {
        const matlab::data::TypedArray<uint64_t> _dynamixel_info_load_infobaud_rate_arr = arr[0]["baud_rate"];
        val.baud_rate = _dynamixel_info_load_infobaud_rate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'baud_rate' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'baud_rate' is wrong type; expected a uint64.");
    }
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.protocol_version
    try {
        const matlab::data::TypedArray<float> _dynamixel_info_load_infoprotocol_version_arr = arr[0]["protocol_version"];
        val.protocol_version = _dynamixel_info_load_infoprotocol_version_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'protocol_version' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'protocol_version' is wrong type; expected a single.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T get_arr_dynamixel_workbench_msgs_DynamixelLoadInfo(MDFactory_T& factory, const dynamixel_workbench_msgs::DynamixelInfo::_load_info_type& val) {
    auto _dynamixel_info_load_infooutArray = factory.createStructArray({1,1},{"device_name","baud_rate","protocol_version"});
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.device_name
    _dynamixel_info_load_infooutArray[0]["device_name"] = factory.createCharArray(val.device_name);
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.baud_rate
    _dynamixel_info_load_infooutArray[0]["baud_rate"] = factory.createScalar(val.baud_rate);
    // _dynamixel_workbench_msgs_DynamixelLoadInfo.protocol_version
    _dynamixel_info_load_infooutArray[0]["protocol_version"] = factory.createScalar(val.protocol_version);
    return std::move(_dynamixel_info_load_infooutArray);
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT void copy_from_arr(dynamixel_workbench_msgs::GetDynamixelInfo::Response& msg, const matlab::data::StructArray arr) {
    try {
        //dynamixel_info
        const matlab::data::StructArray dynamixel_info_arr = arr[0]["dynamixel_info"];
        copy_from_arr_dynamixel_workbench_msgs_DynamixelInfo(msg.dynamixel_info,dynamixel_info_arr);
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'dynamixel_info' is missing.");
    } catch (matlab::data::TypeMismatchException&) {
        throw std::invalid_argument("Field 'dynamixel_info' is wrong type; expected a struct.");
    }
  }
  //----------------------------------------------------------------------------
  DYNAMIXEL_WORKBENCH_MSGS_EXPORT MDArray_T get_arr(MDFactory_T& factory, const dynamixel_workbench_msgs::GetDynamixelInfo::Response& msg) {
    auto outArray = factory.createStructArray({1,1},{"dynamixel_info"});
    // dynamixel_info
    outArray[0]["dynamixel_info"] = get_arr_dynamixel_workbench_msgs_DynamixelInfo(factory, msg.dynamixel_info);
    return std::move(outArray);
  }
} //namespace GetDynamixelInfo_Response
} //namespace matlabhelper
} //namespace dynamixel_workbench_msgs
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
//gen-1
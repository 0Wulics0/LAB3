function [data, info] = getDynamixelInfoResponse
%GetDynamixelInfo gives an empty data for dynamixel_workbench_msgs/GetDynamixelInfoResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.dynamixel_info, info.dynamixel_info] = ros.internal.ros.custommessages.dynamixel_workbench_msgs.dynamixelInfo;
info.dynamixel_info.MLdataType = 'struct';
info.MessageType = 'dynamixel_workbench_msgs/GetDynamixelInfoResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'dynamixel_info';
info.MatPath{2} = 'dynamixel_info.load_info';
info.MatPath{3} = 'dynamixel_info.load_info.device_name';
info.MatPath{4} = 'dynamixel_info.load_info.baud_rate';
info.MatPath{5} = 'dynamixel_info.load_info.protocol_version';
info.MatPath{6} = 'dynamixel_info.model_name';
info.MatPath{7} = 'dynamixel_info.model_number';
info.MatPath{8} = 'dynamixel_info.model_id';

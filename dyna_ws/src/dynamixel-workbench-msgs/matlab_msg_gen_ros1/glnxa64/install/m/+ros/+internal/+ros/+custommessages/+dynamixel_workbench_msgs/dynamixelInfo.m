function [data, info] = dynamixelInfo
%DynamixelInfo gives an empty data for dynamixel_workbench_msgs/DynamixelInfo
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.load_info, info.load_info] = ros.internal.ros.custommessages.dynamixel_workbench_msgs.dynamixelLoadInfo;
info.load_info.MLdataType = 'struct';
[data.model_name, info.model_name] = ros.internal.ros.messages.ros.char('string',0);
[data.model_number, info.model_number] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.model_id, info.model_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelInfo';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,7);
info.MatPath{1} = 'load_info';
info.MatPath{2} = 'load_info.device_name';
info.MatPath{3} = 'load_info.baud_rate';
info.MatPath{4} = 'load_info.protocol_version';
info.MatPath{5} = 'model_name';
info.MatPath{6} = 'model_number';
info.MatPath{7} = 'model_id';

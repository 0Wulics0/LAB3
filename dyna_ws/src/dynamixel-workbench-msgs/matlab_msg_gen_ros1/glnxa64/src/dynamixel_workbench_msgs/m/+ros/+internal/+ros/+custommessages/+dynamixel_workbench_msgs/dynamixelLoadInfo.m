function [data, info] = dynamixelLoadInfo
%DynamixelLoadInfo gives an empty data for dynamixel_workbench_msgs/DynamixelLoadInfo
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.device_name, info.device_name] = ros.internal.ros.messages.ros.char('string',0);
[data.baud_rate, info.baud_rate] = ros.internal.ros.messages.ros.default_type('uint64',1);
[data.protocol_version, info.protocol_version] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelLoadInfo';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'device_name';
info.MatPath{2} = 'baud_rate';
info.MatPath{3} = 'protocol_version';

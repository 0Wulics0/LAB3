function [data, info] = dynamixelState
%DynamixelState gives an empty data for dynamixel_workbench_msgs/DynamixelState
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.present_position, info.present_position] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.present_velocity, info.present_velocity] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.present_current, info.present_current] = ros.internal.ros.messages.ros.default_type('int16',1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'name';
info.MatPath{2} = 'id';
info.MatPath{3} = 'present_position';
info.MatPath{4} = 'present_velocity';
info.MatPath{5} = 'present_current';

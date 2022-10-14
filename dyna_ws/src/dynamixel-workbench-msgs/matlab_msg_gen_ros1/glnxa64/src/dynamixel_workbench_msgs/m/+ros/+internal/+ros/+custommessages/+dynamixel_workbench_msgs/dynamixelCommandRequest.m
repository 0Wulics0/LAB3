function [data, info] = dynamixelCommandRequest
%DynamixelCommand gives an empty data for dynamixel_workbench_msgs/DynamixelCommandRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.command, info.command] = ros.internal.ros.messages.ros.char('string',0);
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.addr_name, info.addr_name] = ros.internal.ros.messages.ros.char('string',0);
[data.value, info.value] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelCommandRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'command';
info.MatPath{2} = 'id';
info.MatPath{3} = 'addr_name';
info.MatPath{4} = 'value';

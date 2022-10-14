function [data, info] = dynamixelCommandResponse
%DynamixelCommand gives an empty data for dynamixel_workbench_msgs/DynamixelCommandResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.comm_result, info.comm_result] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelCommandResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'comm_result';

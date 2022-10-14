function [data, info] = dynamixelStateList
%DynamixelStateList gives an empty data for dynamixel_workbench_msgs/DynamixelStateList
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.dynamixel_state, info.dynamixel_state] = ros.internal.ros.custommessages.dynamixel_workbench_msgs.dynamixelState;
info.dynamixel_state.MLdataType = 'struct';
info.dynamixel_state.MaxLen = NaN;
info.dynamixel_state.MinLen = 0;
data.dynamixel_state = data.dynamixel_state([],1);
info.MessageType = 'dynamixel_workbench_msgs/DynamixelStateList';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'dynamixel_state';
info.MatPath{2} = 'dynamixel_state.name';
info.MatPath{3} = 'dynamixel_state.id';
info.MatPath{4} = 'dynamixel_state.present_position';
info.MatPath{5} = 'dynamixel_state.present_velocity';
info.MatPath{6} = 'dynamixel_state.present_current';

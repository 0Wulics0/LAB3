clc
clear
rosshutdown;
rosinit;
%%
motorSvcClient = rossvcclient('dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/src/dynamixel_workbench_msgs/srv/DynamixelCommand');
motorCommandMsg= rosmessage(motorSvcClient);
%% Cada articualción
q_deg=[0 0 0 0];
q_rad=q_deg*(pi/180);
for i=1:length(q_deg)
    motorCommandMsg.AddrName="Goal_Position";
    motorCommandMsg.Id=i;
    motorCommandMsg.Value=round(mapfun(q_deg(i),-150,150,0,1023));%bits
    call(motorSvcClient,motorCommandMsg);
    pause(1);
end
l=[14.5,10.7,10.7 9];
L(1) = Link('revolute','alpha',pi/2,'a',0,'d',l(1),'offset',0);
L(2) = Link('revolute','alpha',0,'a',l(2),'d',0,'offset',pi/2);
L(3) = Link('revolute','alpha',0,'a',l(3),'d',0,'offset',0);
L(4) = Link('revolute','alpha',0,'a',0,'d',0,'offset',0);%%
Pincher=SerialLink(L,'name','PX');
Pincher.tool=[0 0 1 l(4);-1 0 0 0;0 -1 0 0;0 0 0 1];
figure
Pincher.plot(q_rad,'notiles','noname','floorlevel',-1);
%%
Sub=rossubscriber('/dynamixel_workbench/joint_states');
Sub.LatestMessage.Position
%%
q_deg=[0 0 0 0];
l=[14.5,10.7,10.7 9];
L(1) = Link('revolute','alpha',pi/2,'a',0,'d',l(1),'offset',0);
L(2) = Link('revolute','alpha',0,'a',l(2),'d',0,'offset',pi/2);
L(3) = Link('revolute','alpha',0,'a',l(3),'d',0,'offset',0);
L(4) = Link('revolute','alpha',0,'a',0,'d',0,'offset',0);%%
Pincher=SerialLink(L,'name','PX');
Pincher.tool=[0 0 1 l(4);-1 0 0 0;0 -1 0 0;0 0 0 1];
figure
Pincher.plot([0 0 0 0],'notiles','noname','floorlevel',-1);
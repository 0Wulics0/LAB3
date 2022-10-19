# Cinemática directa - Phantom X Pincher
## Laboratorio 4
### Mediciones
El primer paso del laboratorio es determinar las longitudes en la configuración de home del manipulador para poder establecer los parámetros DH del mismo y de esa manera
poder utilizar el toolbox de peter corke a lo largo del desarrollo del laboratorio.

En este caso las mediciones resultaron en la siguiente tabla de DH realizada a partir del ToolBox de Peter Corke:

### Conexión Dynamixel MATLAB
Inicialmente es necesario instalar los paquetes necesarios para manipular los motores dinamixel por lo que se ejecuta la siguiente serie de comandos dentro de la 
carpeta del entorno catkin creado:

```
cd ~/catwin_ws/src
git clone https://github.com/fegonzalez7/dynamixel_one_motor.git
cd ..
source devel/setup.bash
```

Se revisa el puerto donde estén conectados los motores y se le otorgan permisos al puerto

```
ls /dev/tty*
sudo chmod 777 /dev/ttyUSB0
```

Finalmente se verifica que el paquete se haya instalado correctamente mediante el siguiente comando:

```
roslaunch dynamixel_one_motor one_controller.launch
```

Una vez se hayan descargado correctamente los paquetes requeridos, es necesario conectar MATLAB con los paquetes de motores Dynamixel, dado que el programa no los
reconoce solo al instalarlos. Por este motivo se debe crear un workspace en el home del equipo y añadir dicha dirección con el paquete de dynamixel workbench a los
paths de MATLAB. Esto lo realizamos mediante los siguientes comandos:

```
cd 
mkdir -p dyna_ws/src
cd dyna_ws/src
git clone https://github.com/ROBOTIS-GIT/dynamixel-workbench-msgs.git
cd ..
catkin build dynamixel_workbench_msgs 
```

La carpeta con el paquete se puede crear en cualquier directorio pero resulta conveniente hacerlo en uno dedicado en el home del equipo. Lo más importante es que 
nunca se debe hacer source a este workspace.

Cuando se ha realizado la descarga de los paquetes y se ha creado el espacio de catkin se procede con la conexión a matlab, para ello es necesario correr en la
consola de comandos de matlab un comando que establezca el entorno de python usado por MATLAB en la versión 2.7.

```octave
pyenv('Version','/usr/bin/python2.7')
```

Se generan los mensajes mediante el comando
```octave
rosgenmsg('~/dyna_ws/src/dynamixel-workbench-msgs')
```

Posteriormente se pedirá que se realicen los siguientes pasos para lograr añadir este nuevo directorio con el paquete de los motores Dynamixel a las rutas de MATLAB:

```octave
addpath('~/dyna_ws/src/dynamixel-workbench-msgs/matlab_msg_gen_ros1/glnxa64/install/m')
savepath
clear classes
rehash toolboxcache
```

Con este procedimiento realizado ya es posible programar los movimientos del Pincher mientras se aprovechan todas las herramientas de cálculo ofrecidas por matlab.

### Cinemática Directa
Inicialmente se debe correr el nodo maestro mediante el comando `roscore` en una terminal y en una terminal separada se deben iniciar los servicios de Dynamixel
mediante el comando `roslaunch dynamixel_one_motor one_controller.launch`. Una vez estén corriendo las dos terminales se procede a conectar matlab con el nodo
de ROS.

```octave
clc
clear
rosshutdown;
rosinit;
```

Posteriormente se establece la conexión con el cliente y con un objeto que enviará los mensajes a los motores:

```octave
motorSvcClient = rossvcclient('/dynamixel_workbench/dynamixel_command');
motorCommandMsg= rosmessage(motorSvcClient);
```

Dado que se estaba haciendo uso de MATLAB, se pensó en la posibilidad de crear vectores iculamente espaciados de ángulos para el manipulador, a fin de tener la capacidad
de realizar movimientos más suaves o a velocidades más bajas sin comprometer el torque de cada uno de los motores. Por este motivo es que además de definir una
posición inicial y una final, se crean 2 ciclos for anidados para crear los espacios lineales desde la configuración inicial hacia la configuración objetivo y de la 
misma manera se anidan ciclos for para recorrer dichos arreglos a fin de que todos los motores aparenten moverse al tiempo pero en intervalos de tiempo más cortos.

```octave
%% Cada articualción
q_deg=[0 0 0 0];
q_degi=[-90 45 -55 45];

for i=1:1:length(q_deg)
    col=linspace(q_degi(i),q_deg(i), 15);
    for j=1:1:length(col)
        MTH(j,i)=col(j);
    end
end


q_rad=q_deg*(pi/180);
%%
for j=1:1:length(col)
for i=1:length(q_deg)
    motorCommandMsg.AddrName="Goal_Position";
    motorCommandMsg.Id=i;
    motorCommandMsg.Value=round(mapfun(MTH(j,i),-150,150,0,1023));%bits
    call(motorSvcClient,motorCommandMsg);
end
end
```

Una vez se realizan las movimientos de los motores se hace uso de Peter Corke para gráficar la postura final del manipulador y adicionalmente obtener las configuraciones de 
los motores en la consola.

```octave
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
```

### Demostración de funcionamiento

En los soguientes videos se puede observar el correcto funcionamiento de la solución planteada, se evidencia que el manipulador llega a la posición deseada y a su vez
esta se ve reflejada mediante el toolbox de peter corke.

[Posición 1](https://drive.google.com/file/d/1H4p4j9ZM5QESZhSPj9RuxHWtQJ7HGgWL/view?usp=sharing)

[Posición 2](https://drive.google.com/file/d/1H55qBK8w92ZwmyUKC_DXN_67MY-AfKel/view?usp=sharing)

[Posición 3](https://drive.google.com/file/d/1H87cpfcykmqIxSpTWsx59uY4QK08CXaO/view?usp=sharing)

[Posición 4](https://drive.google.com/file/d/1H-TNnDchlX4vOn9Ds8AQXJrZXUjJjBRJ/view?usp=sharing)


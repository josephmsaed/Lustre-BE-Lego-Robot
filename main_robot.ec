node main_robot
  (sensor_1: bool;
  sensor_2: int;
  sensor_3: int;
  sensor_4: bool;
  motor_speed_sensor_a: int;
  motor_speed_sensor_b: int;
  motor_speed_sensor_c: int;
  motor_speed_sensor_d: int)
returns
  (Clockwise_A: bool;
  Counterclockwise_A: bool;
  Cmd_Position_A: bool;
  Cmd_Speed_A: bool;
  Value_A: int;
  Clockwise_B: bool;
  Counterclockwise_B: bool;
  Cmd_Position_B: bool;
  Cmd_Speed_B: bool;
  Value_B: int;
  Clockwise_C: bool;
  Counterclockwise_C: bool;
  Cmd_Position_C: bool;
  Cmd_Speed_C: bool;
  Value_C: int;
  Clockwise_D: bool;
  Counterclockwise_D: bool;
  Cmd_Position_D: bool;
  Cmd_Speed_D: bool;
  Value_D: int);

var
  V30_counter: int;

let
  Clockwise_A = (true -> (if (V30_counter < 1000) then true else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then false else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then false else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then true else true)))));
  Counterclockwise_A = (false -> (if (V30_counter < 1000) then false else (if (
  (V30_counter > 1100) and (V30_counter < 1500)) then true else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then true else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then false else false)))));
  Cmd_Position_A = (false -> (if (V30_counter < 1000) then false else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then false else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then false else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then false else false)))));
  Cmd_Speed_A = (true -> (if (V30_counter < 1000) then true else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then true else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then true else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then true else true)))));
  Value_A = (50 -> (if (V30_counter < 1000) then 50 else (if ((V30_counter > 
  1100) and (V30_counter < 1500)) then 30 else (if ((V30_counter > 1600) and (
  V30_counter < 2100)) then 30 else (if ((V30_counter > 2200) and (V30_counter 
  < 2500)) then 50 else 50)))));
  Clockwise_B = (true -> (if (V30_counter < 1000) then true else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then false else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then true else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then true else true)))));
  Counterclockwise_B = (false -> (if (V30_counter < 1000) then false else (if (
  (V30_counter > 1100) and (V30_counter < 1500)) then true else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then false else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then false else false)))));
  Cmd_Position_B = (false -> (if (V30_counter < 1000) then false else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then false else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then false else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then false else false)))));
  Cmd_Speed_B = (true -> (if (V30_counter < 1000) then true else (if ((
  V30_counter > 1100) and (V30_counter < 1500)) then true else (if ((
  V30_counter > 1600) and (V30_counter < 2100)) then true else (if ((
  V30_counter > 2200) and (V30_counter < 2500)) then true else true)))));
  Value_B = (50 -> (if (V30_counter < 1000) then 50 else (if ((V30_counter > 
  1100) and (V30_counter < 1500)) then 30 else (if ((V30_counter > 1600) and (
  V30_counter < 2100)) then 30 else (if ((V30_counter > 2200) and (V30_counter 
  < 2500)) then 50 else 50)))));
  Clockwise_C = false;
  Counterclockwise_C = false;
  Cmd_Position_C = false;
  Cmd_Speed_C = true;
  Value_C = 0;
  Clockwise_D = false;
  Counterclockwise_D = false;
  Cmd_Position_D = false;
  Cmd_Speed_D = true;
  Value_D = 0;
  V30_counter = (0 -> ((pre V30_counter) + 1));
tel


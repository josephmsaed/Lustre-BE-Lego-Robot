# BE: Lego Robot with Lustre
The goal of this lab is to program using the Lustre language a robot, which can move in all directions, avoid obstacles and stop when arriving in dark zones.

## _Robot's Inputs:_

- **motor\_speed\_sensor\_a:** (int) the speed of the right wheel.
- **motor\_speed\_sensor\_b:** (int) the speed of the left wheel.
- **sensor\_1:** (bool) right bumper's touch sensor.
- **sensor\_4:** (bool) left bumper's touch sensor.
- **sensor\_2:** (int) color sensor to detect black zones, placed at the back of the robot.
- **sensor\_3:** (int) ultrasonic sensor, acts as eyes of the robot.

## _Robot's Outputs:_
 The robot posses 3 motors, one for each wheel and one to rotate the ultrasonic sensor. And each of these motors has the following outputs:
 - **Clockwise\_M:** (bool) if true, the motor rotates clockwise.
 - **Counterclockwise\_M:** (bool) if true, the motor rotates counterclockwise.
 - **Cmd\_Position\_M:** (bool) set to true if you want to control the motor's position, false otherwise.
 - **Cmd\_Speed\_M:** (bool) set to true if you want to control the motor's speed, false otherwise. 
 - **Value\_M:** (int) the desired motor's position or speed based on the values of the previous 2 outputs.
 
>**Note:** Clockwise\_M and Counterclockwise\_M should not be true at the same time for the same motor. Similarly for Cmd\_Speed\_M and Cmd\_Position\_M.

## _Used Nodes:_
"The main node of the system, covers all the behaviors of the robot."
```
node main_robot (
                sensor_1 : bool ;
		sensor_2 : int ;
		sensor_3 : int ;
		sensor_4 : bool ;
		motor_speed_sensor_a : int ;
		motor_speed_sensor_b : int ;
		motor_speed_sensor_c : int ;
		motor_speed_sensor_d : int ;
                )
returns (
	Clockwise_A : bool; Counterclockwise_A : bool; Cmd_Position_A : bool ; Cmd_Speed_A : bool; Value_A : int; 
	Clockwise_B : bool; Counterclockwise_B : bool; Cmd_Position_B : bool ; Cmd_Speed_B : bool; Value_B : int; 
	Clockwise_C : bool; Counterclockwise_C : bool; Cmd_Position_C : bool ; Cmd_Speed_C : bool; Value_C : int; 
	Clockwise_D : bool; Counterclockwise_D : bool; Cmd_Position_D : bool ; Cmd_Speed_D : bool; Value_D : int; 
	);
```
<br/><br/>

"The principal node that takes into account all the sensors' input to force a state on the robot,
thus controlling its movements."
```
node Automata_0(
                sensor_1, 
                sensor_4: bool; 
                sensor_3, 
                sensor_2: int
                )
returns(state: int);

```
<br/><br/>

"Controls all the outputs related to the two motors in order to make the robot move forward."
```
node Forward(_: bool)
returns (
        Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int
        );
```
<br/><br/>

"Controls all the outputs related to the two motors in order to make the robot move backward."
```
node Backward(_: bool)
returns (
        Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int
        );
```
<br/><br/>

"Controls all the outputs related to the two motors in order to make the robot move left."
```
node Left(_: bool)
returns (
        Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int
        );
```
<br/><br/>

"Controls all the outputs related to the two motors in order to make the robot move right."
```
node Right(_: bool)
returns (
        Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int
        );
```
<br/><br/>

"Controls all the outputs related to the two motors in order to make the robot full stop."
```
node Stop(_: bool)
returns (
        Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int
        );
```
<br/><br/>

"Perservs the true value of 'Set' until 'Reset' is becomes true.
It is used to keep the boolean values of the different sensors as true during a whole behavior cycle."
```
node Switch(
        Set, 
        Reset: bool
        )
returns (S: bool);
```
<br/><br/>

"Increments the output continuously until 'reset'= true sets it back to 0 "
```
node Counter(reset: bool)
returns(count: int);
```


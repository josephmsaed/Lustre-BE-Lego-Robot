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
 
>Note: Clockwise\_M and Counterclockwise\_M should not be true at the same time for the same motor. Similarly for Cmd\_Speed\_M and Cmd\_Position\_M.

## _Used Nodes:_
```sh
node Switch(Set, Reset: bool) returns (S: bool);
""
```

```sh
node Counter(reset: bool) returns(count: int);
"Increment the output continuously until 'reset'= true sets it back to 0 "
```

```sh
node Forward(_: bool)
returns (Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int);
"Controls all the outputs related to the two motors in order to make the robot move forward."
```

```sh
node Backward(_: bool)
returns (Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int);
"Controls all the outputs related to the two motors in order to make the robot move backward."
```

```sh
node Left(_: bool)
returns (Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int);
"Controls all the outputs related to the two motors in order to make the robot move left."
```

```sh
node Right(_: bool)
returns (Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int);
"Controls all the outputs related to the two motors in order to make the robot move right."
```

```sh
node Stop(_: bool)
returns (Clockwise_A, Counterclockwise_A, Cmd_Position_A, Cmd_Speed_A : bool;
        Value_A : int; 
        Clockwise_B, Counterclockwise_B, Cmd_Position_B, Cmd_Speed_B : bool; 
        Value_B : int);
"Controls all the outputs related to the two motors in order to make the robot full stop."
```


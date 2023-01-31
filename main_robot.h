/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : main_robot 
* to be used with : main_robot.c 
********/
#ifndef _main_robot_EC2C_H_FILE
#define _main_robot_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: main_robot 8 20
//IN: _boolean sensor_1
//IN: _integer sensor_2
//IN: _integer sensor_3
//IN: _boolean sensor_4
//IN: _integer motor_speed_sensor_a
//IN: _integer motor_speed_sensor_b
//IN: _integer motor_speed_sensor_c
//IN: _integer motor_speed_sensor_d
//OUT: _boolean Clockwise_A
//OUT: _boolean Counterclockwise_A
//OUT: _boolean Cmd_Position_A
//OUT: _boolean Cmd_Speed_A
//OUT: _integer Value_A
//OUT: _boolean Clockwise_B
//OUT: _boolean Counterclockwise_B
//OUT: _boolean Cmd_Position_B
//OUT: _boolean Cmd_Speed_B
//OUT: _integer Value_B
//OUT: _boolean Clockwise_C
//OUT: _boolean Counterclockwise_C
//OUT: _boolean Cmd_Position_C
//OUT: _boolean Cmd_Speed_C
//OUT: _integer Value_C
//OUT: _boolean Clockwise_D
//OUT: _boolean Counterclockwise_D
//OUT: _boolean Cmd_Position_D
//OUT: _boolean Cmd_Speed_D
//OUT: _integer Value_D
#ifndef _main_robot_EC2C_SRC_FILE
/*--------Context type -------------*/
struct main_robot_ctx;
/*-------- Input procedures -------------*/
extern void main_robot_I_sensor_1(struct main_robot_ctx* ctx, _boolean);
extern void main_robot_I_sensor_2(struct main_robot_ctx* ctx, _integer);
extern void main_robot_I_sensor_3(struct main_robot_ctx* ctx, _integer);
extern void main_robot_I_sensor_4(struct main_robot_ctx* ctx, _boolean);
extern void main_robot_I_motor_speed_sensor_a(struct main_robot_ctx* ctx, 
_integer);
extern void main_robot_I_motor_speed_sensor_b(struct main_robot_ctx* ctx, 
_integer);
extern void main_robot_I_motor_speed_sensor_c(struct main_robot_ctx* ctx, 
_integer);
extern void main_robot_I_motor_speed_sensor_d(struct main_robot_ctx* ctx, 
_integer);
/*-------- Reset procedure -----------*/
extern void main_robot_reset(struct main_robot_ctx* ctx);
/*--------Context copy -------------*/
extern void main_robot_copy_ctx(struct main_robot_ctx* dest, struct 
main_robot_ctx* src);
/*--------Context allocation --------*/
extern struct main_robot_ctx* main_robot_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void main_robot_step(struct main_robot_ctx* ctx);
#endif
#endif

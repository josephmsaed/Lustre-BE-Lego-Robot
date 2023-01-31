/********
* ec2c version 0.68
* c file generated for node : main_robot 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _main_robot_EC2C_SRC_FILE
#include "main_robot.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _sensor_1;
   _integer _sensor_2;
   _integer _sensor_3;
   _boolean _sensor_4;
   _integer _motor_speed_sensor_a;
   _integer _motor_speed_sensor_b;
   _integer _motor_speed_sensor_c;
   _integer _motor_speed_sensor_d;
   //OUTPUTS
   _boolean _Clockwise_A;
   _boolean _Counterclockwise_A;
   _boolean _Cmd_Position_A;
   _boolean _Cmd_Speed_A;
   _integer _Value_A;
   _boolean _Clockwise_B;
   _boolean _Counterclockwise_B;
   _boolean _Cmd_Position_B;
   _boolean _Cmd_Speed_B;
   _integer _Value_B;
   _boolean _Clockwise_C;
   _boolean _Counterclockwise_C;
   _boolean _Cmd_Position_C;
   _boolean _Cmd_Speed_C;
   _integer _Value_C;
   _boolean _Clockwise_D;
   _boolean _Counterclockwise_D;
   _boolean _Cmd_Position_D;
   _boolean _Cmd_Speed_D;
   _integer _Value_D;
   //REGISTERS
   _integer M16;
   _boolean M16_nil;
   _boolean M9;
} main_robot_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void main_robot_I_sensor_1(main_robot_ctx* ctx, _boolean V){
   ctx->_sensor_1 = V;
}
void main_robot_I_sensor_2(main_robot_ctx* ctx, _integer V){
   ctx->_sensor_2 = V;
}
void main_robot_I_sensor_3(main_robot_ctx* ctx, _integer V){
   ctx->_sensor_3 = V;
}
void main_robot_I_sensor_4(main_robot_ctx* ctx, _boolean V){
   ctx->_sensor_4 = V;
}
void main_robot_I_motor_speed_sensor_a(main_robot_ctx* ctx, _integer V){
   ctx->_motor_speed_sensor_a = V;
}
void main_robot_I_motor_speed_sensor_b(main_robot_ctx* ctx, _integer V){
   ctx->_motor_speed_sensor_b = V;
}
void main_robot_I_motor_speed_sensor_c(main_robot_ctx* ctx, _integer V){
   ctx->_motor_speed_sensor_c = V;
}
void main_robot_I_motor_speed_sensor_d(main_robot_ctx* ctx, _integer V){
   ctx->_motor_speed_sensor_d = V;
}
extern void main_robot_O_Clockwise_A(void* cdata, _boolean);
extern void main_robot_O_Counterclockwise_A(void* cdata, _boolean);
extern void main_robot_O_Cmd_Position_A(void* cdata, _boolean);
extern void main_robot_O_Cmd_Speed_A(void* cdata, _boolean);
extern void main_robot_O_Value_A(void* cdata, _integer);
extern void main_robot_O_Clockwise_B(void* cdata, _boolean);
extern void main_robot_O_Counterclockwise_B(void* cdata, _boolean);
extern void main_robot_O_Cmd_Position_B(void* cdata, _boolean);
extern void main_robot_O_Cmd_Speed_B(void* cdata, _boolean);
extern void main_robot_O_Value_B(void* cdata, _integer);
extern void main_robot_O_Clockwise_C(void* cdata, _boolean);
extern void main_robot_O_Counterclockwise_C(void* cdata, _boolean);
extern void main_robot_O_Cmd_Position_C(void* cdata, _boolean);
extern void main_robot_O_Cmd_Speed_C(void* cdata, _boolean);
extern void main_robot_O_Value_C(void* cdata, _integer);
extern void main_robot_O_Clockwise_D(void* cdata, _boolean);
extern void main_robot_O_Counterclockwise_D(void* cdata, _boolean);
extern void main_robot_O_Cmd_Position_D(void* cdata, _boolean);
extern void main_robot_O_Cmd_Speed_D(void* cdata, _boolean);
extern void main_robot_O_Value_D(void* cdata, _integer);
#ifdef CKCHECK
extern void main_robot_BOT_Clockwise_A(void* cdata);
extern void main_robot_BOT_Counterclockwise_A(void* cdata);
extern void main_robot_BOT_Cmd_Position_A(void* cdata);
extern void main_robot_BOT_Cmd_Speed_A(void* cdata);
extern void main_robot_BOT_Value_A(void* cdata);
extern void main_robot_BOT_Clockwise_B(void* cdata);
extern void main_robot_BOT_Counterclockwise_B(void* cdata);
extern void main_robot_BOT_Cmd_Position_B(void* cdata);
extern void main_robot_BOT_Cmd_Speed_B(void* cdata);
extern void main_robot_BOT_Value_B(void* cdata);
extern void main_robot_BOT_Clockwise_C(void* cdata);
extern void main_robot_BOT_Counterclockwise_C(void* cdata);
extern void main_robot_BOT_Cmd_Position_C(void* cdata);
extern void main_robot_BOT_Cmd_Speed_C(void* cdata);
extern void main_robot_BOT_Value_C(void* cdata);
extern void main_robot_BOT_Clockwise_D(void* cdata);
extern void main_robot_BOT_Counterclockwise_D(void* cdata);
extern void main_robot_BOT_Cmd_Position_D(void* cdata);
extern void main_robot_BOT_Cmd_Speed_D(void* cdata);
extern void main_robot_BOT_Value_D(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void main_robot_reset_input(main_robot_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void main_robot_reset(main_robot_ctx* ctx){
   ctx->M16_nil = _true;
   ctx->M9 = _true;
   main_robot_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void main_robot_copy_ctx(main_robot_ctx* dest, main_robot_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(main_robot_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
main_robot_ctx* main_robot_new_ctx(void* cdata){
   main_robot_ctx* ctx = (main_robot_ctx*)calloc(1, sizeof(main_robot_ctx));
   ctx->client_data = cdata;
   main_robot_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void main_robot_step(main_robot_ctx* ctx){
//LOCAL VARIABLES
   _integer L15;
   _integer L13;
   _boolean L12;
   _boolean L21;
   _boolean L23;
   _boolean L20;
   _boolean L28;
   _boolean L30;
   _boolean L27;
   _boolean L34;
   _boolean L36;
   _boolean L33;
   _boolean L32;
   _boolean L26;
   _boolean L19;
   _boolean L11;
   _boolean L8;
   _boolean L43;
   _boolean L42;
   _boolean L41;
   _boolean L40;
   _boolean L39;
   _boolean L48;
   _boolean L47;
   _boolean L46;
   _boolean L45;
   _boolean L53;
   _boolean L52;
   _boolean L51;
   _boolean L50;
   _integer L61;
   _integer L60;
   _integer L58;
   _integer L57;
   _integer L55;
   _boolean L65;
   _boolean L64;
   _boolean L63;
   _boolean L69;
   _boolean L68;
   _boolean L67;
   _integer T16;
//CODE
   L15 = (ctx->M16 + 1);
   if (ctx->M9) {
      L13 = 0;
   } else {
      L13 = L15;
   }
   L12 = (L13 < 1000);
   L21 = (L13 > 1100);
   L23 = (L13 < 1500);
   L20 = (L21 && L23);
   L28 = (L13 > 1600);
   L30 = (L13 < 2100);
   L27 = (L28 && L30);
   L34 = (L13 > 2200);
   L36 = (L13 < 2500);
   L33 = (L34 && L36);
   if (L33) {
      L32 = _true;
   } else {
      L32 = _true;
   }
   if (L27) {
      L26 = _false;
   } else {
      L26 = L32;
   }
   if (L20) {
      L19 = _false;
   } else {
      L19 = L26;
   }
   if (L12) {
      L11 = _true;
   } else {
      L11 = L19;
   }
   if (ctx->M9) {
      L8 = _true;
   } else {
      L8 = L11;
   }
   main_robot_O_Clockwise_A(ctx->client_data, L8);
   if (L33) {
      L43 = _false;
   } else {
      L43 = _false;
   }
   if (L27) {
      L42 = _true;
   } else {
      L42 = L43;
   }
   if (L20) {
      L41 = _true;
   } else {
      L41 = L42;
   }
   if (L12) {
      L40 = _false;
   } else {
      L40 = L41;
   }
   if (ctx->M9) {
      L39 = _false;
   } else {
      L39 = L40;
   }
   main_robot_O_Counterclockwise_A(ctx->client_data, L39);
   if (L27) {
      L48 = _false;
   } else {
      L48 = L43;
   }
   if (L20) {
      L47 = _false;
   } else {
      L47 = L48;
   }
   if (L12) {
      L46 = _false;
   } else {
      L46 = L47;
   }
   if (ctx->M9) {
      L45 = _false;
   } else {
      L45 = L46;
   }
   main_robot_O_Cmd_Position_A(ctx->client_data, L45);
   if (L27) {
      L53 = _true;
   } else {
      L53 = L32;
   }
   if (L20) {
      L52 = _true;
   } else {
      L52 = L53;
   }
   if (L12) {
      L51 = _true;
   } else {
      L51 = L52;
   }
   if (ctx->M9) {
      L50 = _true;
   } else {
      L50 = L51;
   }
   main_robot_O_Cmd_Speed_A(ctx->client_data, L50);
   if (L33) {
      L61 = 50;
   } else {
      L61 = 50;
   }
   if (L27) {
      L60 = 30;
   } else {
      L60 = L61;
   }
   if (L20) {
      L58 = 30;
   } else {
      L58 = L60;
   }
   if (L12) {
      L57 = 50;
   } else {
      L57 = L58;
   }
   if (ctx->M9) {
      L55 = 50;
   } else {
      L55 = L57;
   }
   main_robot_O_Value_A(ctx->client_data, L55);
   if (L20) {
      L65 = _false;
   } else {
      L65 = L53;
   }
   if (L12) {
      L64 = _true;
   } else {
      L64 = L65;
   }
   if (ctx->M9) {
      L63 = _true;
   } else {
      L63 = L64;
   }
   main_robot_O_Clockwise_B(ctx->client_data, L63);
   if (L20) {
      L69 = _true;
   } else {
      L69 = L48;
   }
   if (L12) {
      L68 = _false;
   } else {
      L68 = L69;
   }
   if (ctx->M9) {
      L67 = _false;
   } else {
      L67 = L68;
   }
   main_robot_O_Counterclockwise_B(ctx->client_data, L67);
   main_robot_O_Cmd_Position_B(ctx->client_data, L45);
   main_robot_O_Cmd_Speed_B(ctx->client_data, L50);
   main_robot_O_Value_B(ctx->client_data, L55);
   main_robot_O_Clockwise_C(ctx->client_data, _false);
   main_robot_O_Counterclockwise_C(ctx->client_data, _false);
   main_robot_O_Cmd_Position_C(ctx->client_data, _false);
   main_robot_O_Cmd_Speed_C(ctx->client_data, _true);
   main_robot_O_Value_C(ctx->client_data, 0);
   main_robot_O_Clockwise_D(ctx->client_data, _false);
   main_robot_O_Counterclockwise_D(ctx->client_data, _false);
   main_robot_O_Cmd_Position_D(ctx->client_data, _false);
   main_robot_O_Cmd_Speed_D(ctx->client_data, _true);
   main_robot_O_Value_D(ctx->client_data, 0);
   T16 = L13;
   ctx->M16 = T16;
   ctx->M16_nil = _false;
   ctx->M9 = ctx->M9 && !(_true);
}

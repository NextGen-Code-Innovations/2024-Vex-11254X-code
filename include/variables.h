// removed link from this and moved all of these to main.c
//keeping this file for reference
// -------------------------------------------------- Settings
#define turningReversed 1 // 1 for true and -1 for false
#define drivingReversed 1 // 1 for true and -1 for false

#define BACK_LEFT_MOTOR_REV true
#define FRONT_LEFT_MOTOR_REV true
#define BACK_RIGHT_MOTOR_REV false
#define FRONT_RIGHT_MOTOR_REV false


// --------------------------------------------------  Drivetrian ports
#define FRONT_RIGHT_MOTOR 1 
#define FRONT_LEFT_MOTOR 2
#define BACK_LEFT_MOTOR 3
#define BACK_RIGHT_MOTOR 4


// --------------------------------------------------  PENUMATICS
#define PNU_PORT 2 // idk why but it wont work without this line

// -------------------------------------------------- Extra motor ports
#define FLY_WHEEL_MOTOR 6
#define ARM_LEFT 7
#define ARM_RIGHT 8
#define rachet 11
#define support 12

// ---------------------------------------------------  Sensors 
#define ROTATION_RIGHT_PORT 16
#define ROTATION_LEFT_PORT 17
#define INTERIA_PORT 18
#define ARM_ROT_SENSOR 19
#define Radio_Port 21
#define Auton_Selection_port 1 //A
extern int sensorValue;
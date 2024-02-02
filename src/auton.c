#include "main.h"

void autonomous0(){ //Added 1/2/24
    
    motor_move_absolute(BACK_RIGHT_MOTOR, 3850, 100);
    motor_move_absolute(BACK_LEFT_MOTOR, 3850, 100);
    motor_move_absolute(FRONT_LEFT_MOTOR, 3850, 100);
    motor_move_absolute(FRONT_RIGHT_MOTOR, 3850, 100);

    delay(2000);
    motor_move(FLY_WHEEL_MOTOR, -127);
    delay(1500);

    motor_move(BACK_RIGHT_MOTOR, -100);
    motor_move(BACK_LEFT_MOTOR, -100);
    motor_move(FRONT_LEFT_MOTOR, -100);
    motor_move(FRONT_RIGHT_MOTOR, -100);

    delay(1000);

    motor_brake(FLY_WHEEL_MOTOR); 
    motor_brake(BACK_LEFT_MOTOR);
    motor_brake(BACK_RIGHT_MOTOR);
    motor_brake(FRONT_LEFT_MOTOR);
    motor_brake(FRONT_RIGHT_MOTOR);
}

void autonomousTest(){
    motor_move_relative(BACK_RIGHT_MOTOR, 1000, 100);
    motor_move_relative(BACK_LEFT_MOTOR, 1000, 100);
    motor_move_relative(FRONT_LEFT_MOTOR, 1000, 100);
    motor_move_relative(FRONT_RIGHT_MOTOR, 1000, 100);
}
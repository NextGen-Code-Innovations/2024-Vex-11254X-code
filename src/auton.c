#include "main.h"
#include "auton.h"

void rightSide() {
  printf("Function 1!\n");
}

void func2(void) {
  printf("Function 2!\n");
}

void autonomous(){ //Added 19/1/24  Edited 20/1/24
    if(autonSelect == 0){
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

    } else if (autonSelect == 1) {
        
    } else if (autonSelect == 2) { // started 31/1/24 ALSO SKILS 
        motor_move_absolute(BACK_RIGHT_MOTOR, 2000, 100);
        motor_move_absolute(BACK_LEFT_MOTOR, 2000, 100);
        motor_move_absolute(FRONT_LEFT_MOTOR, 2000, 100);
        motor_move_absolute(FRONT_RIGHT_MOTOR, 2000, 100);
        //move back into the diagonal bar

    }
}
#ifndef PORTS_H
#define PORTS_H
/* PORT MAP */
//I2C Device ID's
#define I2C_CLAW_ENC 0

//Digital sensors (1-12)
#define D_DRIVE_ENC_R1 2
#define D_DRIVE_ENC_R2 3
#define D_DRIVE_ENC_L1 5
#define D_DRIVE_ENC_L2 6

//analog sensors (1-10)
#define A_LIFT_POT_R 3
#define A_LIFT_POT_L 2
#define A_DRIVE_GYRO 1

//motor (1-10)

#define M_DRIVE_BL1 0
#define M_DRIVE_BR1 1
#define M_DRIVE_FL1 0
#define M_DRIVE_FR1 3
#define M_DRIVE_BL2 0
#define M_DRIVE_BR2 2
#define M_DRIVE_FL2 0
#define M_DRIVE_FR2 4

#define M_MOGO_L 8
#define M_MOGO_R 9


/* DRIVE DEFINES */
#define DRIVE_TURN_THRESHOLD 2
#define DRIVE_MOVE_THRESHOLD 2
#define DRIVE_MIN_SPEED 35
#define TURN_MIN_SPEED 32
#define PI 3.14159265358
#endif

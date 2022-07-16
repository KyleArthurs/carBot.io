#ifndef MOTORS_H
#define MOTORS_H

#define MOT_L_F 2
#define MOT_L_B 3
#define MOT_R_F 4
#define MOT_R_B 5

//Prototypes
void motorSetup(void);
void botForward(void);
void botStop(void);
void botBack(void);
void botLeft(void);
void botRight(void);

#endif
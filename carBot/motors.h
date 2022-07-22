#ifndef MOTORS_H
#define MOTORS_H

#define MOT_L_F 2
#define MOT_L_B 3
#define MOT_R_F 4
#define MOT_R_B 5

//Prototypes

/*****************************************************
 * This function should set up the motors
 ****************************************************/
void motorSetup(void);

/*****************************************************
 * This function should make sure the motors are only 
 * moving in the forward direction at all times
 ****************************************************/
void botForward(void);

/*****************************************************
 * This function should make sure the motors are 
 * stopped completely 
 ****************************************************/
void botStop(void);

/*****************************************************
 * This function should make sure the motors are only 
 * moving in the backwards direction at all times
 ****************************************************/
void botBack(void);

/*****************************************************
 * This function should make sure the motors are
 * moving in opposite directions to turn left 
 ****************************************************/
void botLeft(void);

/*****************************************************
 * This function should make sure the motors are
 * moving in opposite directions to turn right
 ****************************************************/
void botRight(void);

#endif
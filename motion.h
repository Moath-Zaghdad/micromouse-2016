#ifndef MICROMOUSE_MOTION_H_
#define MICROMOUSE_MOTION_H_

#include "IdealSweptTurns.h"

void motion_set_max_speed(float new_max_speed);
void motion_set_max_accel(float new_max_accel);

void motion_forward(float distance, float exit_speed);
void motion_collect(float distance, float exit_speed);
void motion_rotate(float angle);
void motion_gyro_rotate(float angle);
void motion_corner(SweptTurnType turn_type, float speed);

void motion_hold(unsigned int time);
void motion_hold_range(int setpoint, unsigned int time);

// functions to set max velocity variables
void motion_set_maxAccel_straight(float temp_max_accel_straight);
void motion_set_maxDecel_straight(float temp_max_decel_straight);
void motion_set_maxAccel_rotate(float temp_max_accel_rotate);
void motion_set_maxDecel_rotate(float temp_max_decel_rotate);
void motion_set_maxAccel_corner(float temp_max_accel_corner);
void motion_set_maxDecel_corner(float temp_max_decel_corner);
void motion_set_maxVel_straight(float temp_max_vel_straight);
void motion_set_maxVel_rotate(float temp_max_vel_rotate);
void motion_set_maxVel_corner(float temp_max_vel_corner);

#endif

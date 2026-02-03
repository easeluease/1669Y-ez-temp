#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(-9);
 inline pros::Motor motor_9(9);
 inline pros::Motor motor_10(10);
// Solenoids
 inline pros::adi::Pneumatics solenoid_a('A', false);
 inline pros::adi::Pneumatics solenoid_b('B', false);
 inline pros::adi::Pneumatics solenoid_c('C', false);
 inline pros::adi::Pneumatics solenoid_d('D', false);
// inline pros::adi::DigitalIn limit_switch('A');
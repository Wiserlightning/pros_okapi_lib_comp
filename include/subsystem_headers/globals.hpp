#include "main.h"

#ifndef GLOBALS_H
#define GLOBALS_H

//Miscellaneous Libraries
#include <vector>

//Initialization Variables
extern const std::vector<std::string> drive_modes;
extern std::string sel_drive_mode;

//Hardware Prototypes
#define DRV_L_TOP 19
#define DRV_L_BTM 9
#define DRV_R_TOP -2
#define DRV_R_BTM -1

extern okapi::Motor intk_lf;
extern okapi::Motor intk_rt;
extern okapi::MotorGroup intk_grp;

extern okapi::Motor angler;
extern okapi::Motor arm;

extern okapi::Controller master_ctrl;

//Hardware Enums, Constants, Etc.
#define GRN_CART okapi::Motor::gearset::green
#define RED_CART okapi::Motor::gearset::red

#define ENC_TIC okapi::Motor::encoderUnits::counts

#define BRKE_COAST okapi::Motor::brakeMode::coast

#define JOY_LX okapi::ControllerAnalog::leftX
#define JOY_LY okapi::ControllerAnalog::leftY
#define JOY_RX okapi::ControllerAnalog::rightX
#define JOY_RY okapi::ControllerAnalog::rightY
#define BUT_L1 okapi::ControllerDigital::L1
#define BUT_L2 okapi::ControllerDigital::L2
#define BUT_R1 okapi::ControllerDigital::R1
#define BUT_R2 okapi::ControllerDigital::R2
#define BUT_A okapi::ControllerDigital::A
#define BUT_B okapi::ControllerDigital::B
#define BUT_X okapi::ControllerDigital::X
#define BUT_Y okapi::ControllerDigital::Y
#define BUT_UP okapi::ControllerDigital::up
#define BUT_DWN okapi::ControllerDigital::down
#define BUT_LEFT okapi::ControllerDigital::left
#define BUT_RIGHT okapi::ControllerDigital::right

#endif
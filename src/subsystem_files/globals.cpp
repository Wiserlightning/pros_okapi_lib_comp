#include "main.h"
#include "subsystem_headers\globals.hpp"

//Initialization Variables
const std::vector<std::string> drive_modes = {
    "TANK",
    "ARCADE"
};
std::string sel_drive_mode;

//Hardware Prototypes
okapi::Motor intk_lf(11, false, GRN_CART, ENC_TIC);
okapi::Motor intk_rt(20, true, GRN_CART, ENC_TIC);
okapi::MotorGroup intk_grp({intk_lf, intk_rt});

okapi::Motor angler(10, false, RED_CART, ENC_TIC);
okapi::Motor arm(13, false, GRN_CART, ENC_TIC);

okapi::Controller master_ctrl(okapi::ControllerId::master);

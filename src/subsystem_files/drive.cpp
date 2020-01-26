#include "main.h"
#include "subsystem_headers\globals.hpp"
#include "subsystem_headers\drive.hpp"

using namespace okapi;

//Hardware Declaration and Globals
auto drive_chassis = ChassisControllerBuilder()
    .withMotors({DRV_L_TOP, DRV_L_BTM}, {DRV_R_TOP, DRV_R_BTM})
    .withDimensions(GRN_CART, {{10_in, 10.5_in}, imev5GreenTPR})
    .build();

//Helper Functions

//Main Functions
void drive_op(void) {
    drive_chassis->getModel()->setBrakeMode(BRKE_COAST);
    if (sel_drive_mode == "TANK") {
        drive_chassis->getModel()->tank(
            master_ctrl.getAnalog(JOY_LY),
            master_ctrl.getAnalog(JOY_RY),
            2.0
        );
    } else {
        drive_chassis->getModel()->arcade(
            master_ctrl.getAnalog(JOY_RX),
            master_ctrl.getAnalog(JOY_RY),
            2.0
        );
    }
}

//TEST
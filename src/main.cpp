/**
 * Main entry point for automotive software module
 * ISO 26262 ASIL-B compliant
 */

#include <iostream>
#include "vehicle_controller.h"

int main() {
    VehicleController controller;
    controller.initialize();
    controller.startMainLoop();
    return 0;
}

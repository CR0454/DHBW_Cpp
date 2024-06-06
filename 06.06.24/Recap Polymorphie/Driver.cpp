#include "Driver.hpp"

void Driver::testVehicle(Vehicle& vehicle) {        //& für Pointer/Referenz, um die Car/Motorbike Eigenschaften zu behalten
    vehicle.displayInfo();
    vehicle.accelerate();
}
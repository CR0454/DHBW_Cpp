#include "Vehicle.hpp"
#include "Driver.hpp"

int main() {
    Car porsche(350, "Porsche", 2);
    Motorbike bmw(50, "BMW", "V");
    Driver schumacher;

    schumacher.testVehicle(porsche);
    schumacher.testVehicle(bmw);

}
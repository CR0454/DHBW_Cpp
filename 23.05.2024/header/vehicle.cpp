#include "vehicle.hpp"

void Vehicle::enter(Person person) {
    seats.push_back(person);
}
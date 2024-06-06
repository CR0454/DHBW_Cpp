#include "Vehicle.hpp"

void Vehicle::displayInfo() {
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << "\n";
}

void Vehicle::accelerate() {
    std::cout << "accelerate with power " << m_power << "\n";
}

void Car::accelerate() {
    std::cout << "accelerate with power " << m_power << " Drift\n";
}

void Car::displayInfo() {
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << ", Doors: " << m_numberOfDoors << "\n";
}

void Motorbike::accelerate() {
    std::cout << "accelerate with power " << m_power << " Wheelie\n";
}

void Motorbike::displayInfo() {
    std::cout << "Brand: " << m_brand << ", Power: " << m_power << ", Engine Type: " << m_engineType << "\n";
}
#include <iostream>
#include <vector>
#include "person.hpp"

class Vehicle {
    public:
        Vehicle(int maxSeats) {seats.resize(maxSeats);}

        void enter(Person person);

        void exit(int seatNumber);
    private:
        std::vector<Person> seats;
};
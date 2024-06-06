#include <iostream>
#include "person.hpp"
#include "vehicle.hpp"

int main()
{
    Person cornelius("Cornelius", Nationality::de);

    std::cout << cornelius.getName() << "\n";

    cornelius.greet(cornelius);

    Vehicle porsche(5);

    porsche.enter(cornelius);
}
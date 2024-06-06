#include "person.hpp"


std::string Person::getName() {
    return name;
}

void Person::greet(Person greetedPerson) {
    switch(greetedPerson.nationality){
        case Nationality::de: 
            std::cout << "Hallo "; break;
        case Nationality::en:
            std::cout << "Hello "; break;
        case Nationality::it:
            std::cout << "Buongiorno "; break;
        case Nationality::es:
            std::cout << "Hola "; break;
        default:
            std::cout << "Du bist nicht von dieser Welt "; break;
    }
    std::cout << name << "\n";
}
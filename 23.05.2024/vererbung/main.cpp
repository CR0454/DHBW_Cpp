#include "person.hpp"

int main() {
    Person cornelius("Cornelius", "Straße", "@.com");

    std::cout << cornelius.getEmail() << "\n";

    Professor professor("Professor", "Straße", "@2.com", "sdahfahga");
    std::cout << professor.getIban() << "\n";
    std::cout << professor.getEmail() << "\n";
}
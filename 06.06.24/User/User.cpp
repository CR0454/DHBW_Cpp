#include "User.hpp"

int User::classCounter = 0;

void User::print() {
        std::cout << "ID: " << m_ID << ", Name: " << m_name << "\n";
    }
#include "Konto.hpp"

int Konto::giroCounter = 0;
int Konto::bausCounter = 0;
int Konto::tagesCounter = 0;

void Konto::info() {
    std::cout << 
        "\nNummer: " << m_number << 
        "\n" << m_typ << 
        "\nGuthaben: " << m_guthaben << 
        " €\nZinssatz: " << m_zinssatz << "\n";
}

void Konto::einzahlen(double input) {
    m_guthaben += input;
}

void Konto::auszahlen(double output) {
    if(m_guthaben >= output) {
        m_guthaben -= output;
    }
    else {
        std::cout << "Nicht genug Guthaben!\n";
    }
}
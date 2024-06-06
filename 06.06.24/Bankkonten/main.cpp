#include "Konto.hpp"

int main() {
    Konto k1("Bausparvertrag", 1000.5, 1.2);
    std::cout << "Bausparverträge: " << Konto::bausCounter << "\n";

    k1.info();
    k1.auszahlen(500);
    k1.auszahlen(600);
    k1.einzahlen(200);
}
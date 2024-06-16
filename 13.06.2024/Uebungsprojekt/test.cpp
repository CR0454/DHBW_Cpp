#include <iostream>

int main() {

    char a[3][3];
    a[2][2] = 'a';

    std::cout << "\n" << sizeof(a) << a[2][2] << "\n";
}
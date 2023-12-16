#include <iostream>

int main() {
    int x = 5;
    int y = 3;

    if (x > y && x != 0) {
        std::cout << "Условие выполняется." << std::endl;
    } else {
        std::cout << "Условие не выполняется." << std::endl;
    }

    return 0;
}

#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int inputNumber;

    // Ввод числа от пользователя
    std::cout << "Введите целое число: ";
    std::cin >> inputNumber;

    // Проверка на простоту
    if (isPrime(inputNumber)) {
        std::cout << inputNumber << " - простое число." << std::endl;
    } else {
        std::cout << inputNumber << " - не простое число." << std::endl;
    }

    return 0;
}

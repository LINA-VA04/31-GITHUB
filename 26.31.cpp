#include <iostream>

int main() {
    double число1, число2, сумма, произведение;

    std::cout << "Введите первое число: ";
    std::cin >> число1;

    std::cout << "Введите второе число: ";
    std::cin >> число2;

    сумма = число1 + число2;

    произведение = число1 * число2;

    std::cout << "Сумма чисел: " << сумма << std::endl;
    std::cout << "Произведение чисел: " << произведение << std::endl;

    return 0;
}
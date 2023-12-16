
#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    int result = num1 * num2;
    std::cout << "Результат умножения: " << result << std::endl;

    return 0;
}

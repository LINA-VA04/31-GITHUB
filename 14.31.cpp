#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    
    std::cout << "Введите число для вычисления факториала: ";
    int number;
    std::cin >> number;

    if (number < 0) {
        std::cerr << "Факториал отрицательного числа не определен." << std::endl;
        return 1;
    }

    int result = factorial(number);
    std::cout << "Факториал " << number << " равен " << result << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int N;
    std::cout << "Введите значение N: ";
    std::cin >> N;
    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }
    std::cout << "Сумма чисел от 1 до " << N << " равна " << sum << std::endl;

    return 0;
}

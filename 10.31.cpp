#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Добро пожаловать в игру 'Угадай число'!\n";
    std::cout << "Я загадал число от 1 до 100. Попробуйте угадать.\n";

    do {
        std::cout << "Введите вашу догадку: ";
        std::cin >> guess;

        if (std::cin.fail()) {
            std::cerr << "Ошибка ввода. Пожалуйста, введите целое число.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // очищаем ввод
            continue;
        }

        attempts++;

        if (guess == secretNumber) {
            std::cout << "Поздравляю! Вы угадали число за " << attempts << " попыток.\n";
        } else if (guess < secretNumber) {
            std::cout << "Не угадали. Моё число больше.\n";
        } else {
            std::cout << "Не угадали. Моё число меньше.\n";
        }

    } while (guess != secretNumber);

    return 0;
}

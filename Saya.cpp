#include <iostream>
#include <string>
class Person {
public:
      Person(std::string name, int age, std::string favoriteColor)
        : name(name), age(age), favoriteColor(favoriteColor) {}
    void displayInfo() {
        std::cout << "Имя: " << name << std::endl;
        std::cout << "Возраст: " << age << " лет" << std::endl;
        std::cout << "Любимый цвет: " << favoriteColor << std::endl;
    }

private:
   
    std::string name;
    int age;
    std::string favoriteColor;
};

int main() {
    Person elina("Элина", 19, "розовый");
    elina.displayInfo();

    return 0;
}

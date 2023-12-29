#include <iostream>

class Base {
public:
    Base(int value) : value(value) {}

    void display() const {
        std::cout << "Base class value: " << value << std::endl;
    }

    void subtract(int amount) {
        value -= amount;
    }

protected:
    int value;
};

int main() {
    Base baseObject(10);

    std::cout << "Before subtraction in base class:" << std::endl;
    baseObject.display();

    baseObject.subtract(5);

    std::cout << "After subtraction in base class:" << std::endl;
    baseObject.display();

    return 0;
}

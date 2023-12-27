#include <iostream>

typedef void (*DelegateFunction)(int);

void SomeFunction(int value) {
    std::cout << "Function called with value: " << value << std::endl;
}

int main() {
    DelegateFunction delegate = &SomeFunction;

    delegate(42);

    return 0;
}

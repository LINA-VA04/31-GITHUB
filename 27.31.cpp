#include <iostream>

using namespace std;

bool logicalAND(bool a, bool b) {
    return a && b;
}

bool logicalOR(bool a, bool b) {
    return a || b;
}

bool logicalNOT(bool a) {
    return !a;
}

int main() {
    bool x = true;
    bool y = false;

    cout << "x AND y = " << logicalAND(x, y) << endl;

    cout << "x OR y = " << logicalOR(x, y) << endl;

    cout << "NOT x = " << logicalNOT(x) << endl;

    return 0;
}

#include <iostream>
using namespace std;
int print_X()
{ cout << "x = 1\n";
 return 0;
}
int print_Y()
{ cout << "y = 2\n";
 return 0;
}
void print_X_Y(int a, int b) {cout << "a = "<<a<< " b = "<<b<<endl; }
int main() {
 print_X_Y(print_Y(), print_X()); 
return 0;}

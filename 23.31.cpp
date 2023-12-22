#include <iostream> 
using namespace std; 
void func(int numb)
{int rezult = 0;
for (int i = 1; i <= numb; i++)
rezult *= i;
cout << rezult << endl;}
int main(){ 
int digit; 
digit=4; 
func(digit);
return 0;}

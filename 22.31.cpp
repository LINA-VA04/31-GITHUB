#include<iostream>
using namespace std;

int sum_by_value(int);
int sum_by_reference(int &);
int sum_by_pointer(int *);

int main()
{ 
    int value = 10;

    cout << "1=" << sum_by_value(value) << endl;
    cout << "2=" << sum_by_reference(value) << endl;
    cout << "3=" << value << endl;
    cout << "4=" << sum_by_pointer(&value) << endl; 
    cout << "5=" << value << endl;

    return 0;
}

int sum_by_value(int value)
{
   value += value; return value;}


int sum_by_reference(int &reference)
{
     reference += reference; return reference;
}

int sum_by_pointer(int *ptrvalue)
{
    return *ptrvalue += *ptrvalue; 
}


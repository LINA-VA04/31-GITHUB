#include<iostream>
using namespace std;
int main(){
    int var1=123;
    int var2=99;
    int*ptrvar1=&var1;
    int*ptrvar2=&var2;
    if(ptrvar1==ptrvar2)
    cout<<"var1==var2"<<endl;
    if(*ptrvar1>*ptrvar2)
    cout<<"var1>var2"<<endl;
    return 0;}

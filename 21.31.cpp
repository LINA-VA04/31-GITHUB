#include<iostream>
using namespace std;

int main(){
    int x=1, y[4];
    y[1]=x; y[2]=x+1; y[3]=x+2; y[4]+x+3;
    cout<<y[y[y[3]-2]]+y[y[y[3]]];
    return 0;
}

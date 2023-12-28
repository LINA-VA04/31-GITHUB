#include<iostream.h>
void main(){
    int a[9]={7,3,8};
    int top=2;
    while (top!=0){
        for(int i=0;i<top;i++){
            if(a[i]>a[i+1]){
                int temp;
                temp = a[i];
                a[i]=a[i+1];
                a[i+1]=temp;}
            }
        }
        top--;}
        for(int i=0; i<3;i++){
            cout<<a[i]<<",";}
            return 0;
        }

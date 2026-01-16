#include<iostream>
using namespace std;

int main(){
    int x=10;
    float y=7.9;
//  create a pointer that can store address of x
//  as x is an integer variable so we need a pointer that can store address of integer type
    int *ptr; //we will get the garbage value as we have not initialised the variable
    ptr=&x;
    cout<<ptr<<endl;
//  create a pointer that can store address of y
//  y is a float variable so we need to store it in a float pointer
    float *ptrf=&y;
    cout<<ptrf<<endl;
    return 0 ;
}
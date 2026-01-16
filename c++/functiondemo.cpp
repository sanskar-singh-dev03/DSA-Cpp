#include<iostream>
#include<math.h>
using namespace std;

int addition(int x,int y){
    int result = x + y;
    cout<<sqrt(result)<<endl;
    return result;
}

void fun(string name){
    cout<<"Are you having fun "<<name<<"? "<<"\n";
}

int main(){
    fun("Sanskar");
    int response = addition(9,8);
    cout<<response;
    return 0 ;
}
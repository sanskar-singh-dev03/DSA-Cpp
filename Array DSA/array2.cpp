#include<iostream>
using namespace std;

int main(){
    //traversing of array
    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
 
    //for loop
    // for (int idx = 0; idx < size; idx++)
    // {
        // cout<<array[idx]<<endl;
    // }

    //for each loop
    for(int ele : array){
        cout<<ele<<endl;
    }
    
    //while loop
    // int index = 0;
    // while (index<size)
    // {
        // cout<<array[index]<<endl;
        // index++;
    // }

    //how to take input in array
    char vowels[5];
    // for (int idx = 0; idx < 5; idx++)
    // {
        // cin>>vowels[idx];
    // }

    for(char &element:vowels){
        cin>>element;
    }
    
    for (int idx = 0; idx < 5; idx++)
    {
        cout<<vowels[idx]<<" ";
    }
    
    return 0 ;
}
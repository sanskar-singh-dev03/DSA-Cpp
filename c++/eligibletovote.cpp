#include<iostream>
using namespace std;

bool checkEligible(int age, int limit){
    if (age>=limit)
    {
        return true;//the person is eligible
    }
    else{
        //person is not eligible
        return false;
    }
}

int main(){
    int voting_limit = 18;
    int is_eligible_for_voting = checkEligible(34, voting_limit);
    if (is_eligible_for_voting)
    {
        cout<<"yes,the current person is eligible to vote";
    }
    else{
        cout<<"No,the current person is not eligible to vote";
    }
    return 0 ;
}
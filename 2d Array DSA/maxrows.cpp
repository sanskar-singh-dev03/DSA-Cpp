#include<iostream>
#include<vector>
using namespace std;
//Method-1-->traversing each row for getting 1's
//Method-2-->finding leftmost one row
int leftMostonesrow(vector<vector<int>>&v){
    int leftmostone=-1;
    int maxonerow=-1;
    int j=v[0].size()-1;
    //finding left most one in 0th row
    while(j>=0 && v[0][j]==1){
        leftmostone=j;
        maxonerow=0;
        j--;
    }
    //check in each row so that we can find 1 in leftmostonerow
    for(int i=1;i<v.size();i++){
        while(j>=0 && v[i][j]==1){
            leftmostone=j;
            maxonerow=i;
            j--;
        }
    }
    return maxonerow;
}
int MaximumOnesRow(vector<vector<int>>&v){
    int MaxOnes=INT8_MIN;
    int maxOnesRow=-1;
    int columns=v[0].size();

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones=columns-j;
                if(numberofones>MaxOnes){
                    MaxOnes=numberofones;
                    maxOnesRow=i;
                }
            }
        }
        break;
    }
    return maxOnesRow;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int res=leftMostonesrow(vec);
    cout<<res<<endl;
    
    return 0 ;
}
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


//T.C = Exponential time complexity;
void minJumpGame(vector<int>arr , int index , int& ans ,int step){
    // Base case
    if(index == arr.size()-1)
    {
        ans = min(ans , step);
        return;
    }

    if(index > arr.size())
    {
        return;
    }

    if(arr[index] == 0)  // bixh m khi pr zero element aa jaye then
    {
        return;
    }

    for(int jump=1 ; jump<=arr[index] ; jump++)
    {
        minJumpGame(arr , index+jump , ans , step+1);
    }
}
int main(){
    vector<int>arr{2 , 3 , 1 , 1 , 4};

    int index = 0;

    int ans = INT_MAX;

    minJumpGame(arr , index , ans , 0);

    cout<<"Minimum step to reach last index is = "<<ans<<endl;

    
}

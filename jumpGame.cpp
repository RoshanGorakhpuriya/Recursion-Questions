#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

//T.C = Exponential time complexity;
bool jumpGame(vector<int>arr , int index){
    // Base case
    if(index == arr.size()-1)
    return true;

    if(index > arr.size())
    return false;

    if(arr[index] == 0)  // Bich element m khi pr zero aa jaye
    return false;

    bool ans = false;

    for(int jump=1 ; jump<=arr[index] ; jump++)
    {
        ans = ans || jumpGame(arr , jump+index);
    }
    return ans;
}

int main(){
    vector<int>arr{2 , 3 , 1 , 1 , 4};

    int index = 0;

    bool ans = jumpGame(arr , index);

    if(ans)
    {
        cout<<"Reach to last index\n";
    }
    else
    {
        cout<<"Not able to reach\n";
    }
}

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int minPathSum(vector<vector<int>>&arr , int row , int index ,  int sum , int& ans){
    // Base case
    if(row == arr.size()-1)
    {
        return arr[row][index];
    }

    int down = arr[row][index] + minPathSum(arr , row+1 , index , sum+arr[row][index] , ans);
    int plus = arr[row][index] + minPathSum(arr , row+1 , index+1 , sum+arr[row][index] , ans);

    return min(down , plus);
}

int main(){
    vector<vector<int>>arr = {{2} , {3 , 4} , {6 , 5 , 7} , {4 , 1 , 8 , 3}};

    int ans = minPathSum(arr , 0 , 0 , 0 , ans);
    cout<<"Final Result is = "<<ans<<endl;                        
}
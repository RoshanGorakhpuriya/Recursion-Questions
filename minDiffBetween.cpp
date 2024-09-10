// minimum difference between target and choosen element
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

/*
int minDiffBetween(vector<vector<int>>&arr , int row , int target , int sum , int& ans){
    // Base case
    if(row == arr.size()){
        return abs(target-sum);

    for(int col=0 ; col<arr[row].size() ; col++){
         int recursionAns = minDiffBetween(arr , row+1 , target , sum+arr[row][col] , ans);
         ans = min(ans , recursionAns);
    }
    return ans;
}
*/

//T.C = O(n^m); // n= no of recursion call for m no of element in arr;
void minDiffBetween(vector<vector<int>>&arr , int row , int target , int sum , int& ans){
    // Base case
    if(row == arr.size()){
        int diff = abs(target-sum);  // Question m absolute diff nikalne ko bola h wo m bul jaata hu
        ans = min(ans , diff);
        return;
    }

    for(int col=0 ; col<arr[row].size() ; col++){
         minDiffBetween(arr , row+1 , target , sum+arr[row][col] , ans);   
    }
}

int main(){
    vector<vector<int>>arr = {{1 , 2 , 3},
                              {4 , 5 , 6},
                              {7 , 8 , 9}};

    int target = 13;
    int ans = INT_MAX;

    minDiffBetween(arr , 0 , target , 0 , ans);
    cout<<"Final Result is = "<<ans<<endl;                        
}
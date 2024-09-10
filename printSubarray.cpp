#include<iostream>
#include<vector>
using namespace std;

void printSubarrayHelper(vector<int>& arr , int start , int end){
    // Base case
    if(end == arr.size()){
        return;
    }

    // Ek case solve kr diya
    for(int i=start ; i<=end ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Recursion call
    printSubarrayHelper(arr , start  , end+1);
}

void printSubarray(vector<int>& arr){
    for(int start=0 ; start<arr.size() ; start++){
        int end = start;
        printSubarrayHelper(arr , start , end);
    }
}

int main(){
    vector<int>arr{1 , 2 ,3 ,4, 5};

    printSubarray(arr);
}


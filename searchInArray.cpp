#include<iostream>
using namespace std;

bool searchInArray(int arr[] , int index , int size , int target)
{
    // Base-Case
    if(index == size)
    {
        return false;
    }

    // Condition check for target
    if(arr[index] == target)
    {
        return true;
    }

    // recursion Call
    bool ans = searchInArray(arr , index+1 , size , target);
    return ans;
}

int main(){
    int arr[5] = {1 , 2, 3 , 4 , 5};

    int size = 5;

    int index = 0;

    int target = 14;

    cout<<searchInArray(arr , index , size , target)<<endl;
}
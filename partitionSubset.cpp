#include<iostream>
using namespace std;

bool partitionSubset(int arr[] , int target , int index , int n)
{
    // Base case
    if(target == 0)
    {
        return true;
    }
    if(target < 0)
    {
        return false;
    }
    if(index == n)
    {
        return false;
    }

    bool recursionAns1 = partitionSubset(arr , target-arr[index] , index+1 , n);
    bool recursionAns2 = partitionSubset(arr , target , index+1 , n);

    return recursionAns1 || recursionAns2;
}

int main(){
    int arr[4] = {1 , 5 , 11 , 5};

    int n = 4;

    // sbse pehle sum calculate karenge , 
    // agr sum odd aaya tho equal partition ni ho skta 

    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    // if mene sum/2 k liye check karu subset k ya ni
    // agr muje sum/2 ka subset mil gaya then remaining sum/2 is already present; 

    int target = sum/2;
    int index = 0;

    bool ans = partitionSubset(arr , target , index , n);
    if(ans)
    {
        cout<<"Make equal subsets\n";
    }
    else
    {
        cout<<"Not equal subsets\n";
    }
}
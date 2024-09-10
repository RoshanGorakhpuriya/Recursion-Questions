#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int start , int end , int target)
{
    // Base-case
    if(start > end)
    {
        return -1;
    }

    int mid = (start + end)/2;
    
    if(arr[mid] == target)
    {
         return mid;
    }

    else if(arr[mid] > target)
    {
        return binarySearch(arr , n , start , mid-1 , target);
    }

    else if(arr[mid] < target)
    {
        return binarySearch(arr , n ,  mid+1 , end , target);
    }
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};

    int n = 5;

    int x = 40;

    int start = 0;

    int end = n-1;

    int target = 60;

    cout<<binarySearch(arr , n ,start , end , target)<<endl;
}
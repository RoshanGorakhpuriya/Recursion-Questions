#include<iostream>
using namespace std;

bool isSorted(int arr[] , int n , int i)
{
    if(i>=n)
    {
        return true;
    }

    else if(arr[i] < arr[i-1])
    {
        return false;
    }
    bool ans = isSorted(arr , n , i+1);
    return ans;
}

int main(){
    int arr[5] = {10 , 20 , 30 , 40 , 50};

    int n = 5;

    int i=1;

    bool res = isSorted(arr , n , i);

    if(res)
    {
        cout<<"Yes.. it's sorted\n";
    }
    else
    {
        cout<<"No .. its's not sorted\n";
    }
}
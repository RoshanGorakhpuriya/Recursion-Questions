#include<iostream>
#include<limits.h>
using namespace std;

int minimumElement(int arr[] , int index , int n , int &mini)
{
    // Base-case
    if(index == n)
    {
        return mini;
    }

    else if(arr[index] < mini)
    {
        mini = arr[index];
    }
    // Recursion call
    int ans = minimumElement(arr , index+1 , n , mini);

    return ans;
}

int main(){
    int arr[5] = {3 , 10 , 14 , 23 , 2};

    int index = 0;

    int n = 5;

    int min_element = INT_MAX;

    int ans = minimumElement(arr , index , n , min_element);

    cout<<"Answer is = "<<ans<<endl;
}
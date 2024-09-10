#include<iostream>
#include<limits.h>
using namespace std;

int maximumElement(int arr[] , int index , int n , int &maxi)
{
    // Base-case
    if(index == n)
    {
        return maxi;
    }

    else if(arr[index] > maxi)
    {
        maxi = arr[index];
    }
    // Recursion call
    int ans = maximumElement(arr , index+1 , n , maxi);

    return ans;
}

int main(){
    int arr[5] = {3 , 10 , 14 , 23 , 2};

    int index = 0;

    int n = 5;

    int max_element = INT_MIN;

    int ans = maximumElement(arr , index , n , max_element);

    cout<<"Answer is = "<<ans<<endl;
}
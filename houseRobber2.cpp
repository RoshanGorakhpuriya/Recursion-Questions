// Houses are arranged in circular manner;
#include<iostream>
using namespace std;

int solve(int arr[] , int start , int end)
{
    if(start > end)
    {
        return 0;
    }

    // first le liya abb uske sath ek skip krke next pe jayenge
    int option1 = arr[start] + solve(arr , start+2 , end);

    // first ni liya uska next ko take krenge 
    int option2 = 0 + solve(arr , start+1 , end);

    return max(option1 , option2);
}

int main(){
    int arr[4] = {1 , 2 , 3 , 1};

    int n = 4;

    // to handle single element
    if(n == 1)
    return arr[0];

    // if mene first house m robbering kr li then last house m ni kr skta
    // Becoz houses are arranged in circular manner
    int option1 = solve(arr , 0 , n-2);

    // if mene last house m robbering kr li then first house m ni kr skta
    int option2 = solve(arr , 1 , n-1);

    cout<<"Maximum answer is = "<<max(option1 , option2)<<endl;

}
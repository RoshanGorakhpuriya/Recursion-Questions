#include<iostream>
using namespace std;

void printArray(int arr[] , int size , int index)
{
    // Base-case
    if(size == index)
    {
        return;
    }

    cout<<arr[index]<<" ";

    // Recursion Call
    printArray(arr , size , index+1);
}

int main(){
    int arr[5] = {1 , 2 , 3 , 4 , 5};
    int size = 5;
    int index = 0;

    printArray(arr , size , index);
}
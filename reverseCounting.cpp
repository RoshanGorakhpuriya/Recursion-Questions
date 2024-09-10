#include<iostream>
using namespace std;

void printReverseCounting(int n)
{
    // Base case
    if(n == 0)
    {
        return;
    }

    // Processing
    cout<<n<<" ";

    // Recursion call
    printReverseCounting(n-1);
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    printReverseCounting(n);
}
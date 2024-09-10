#include<iostream>
using namespace std;

void printCounting(int n)
{
    // Base case
    if(n == 0)
    {
        return;
    }

    // recursion call
    printCounting(n-1);

    // processing
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    printCounting(n);
}
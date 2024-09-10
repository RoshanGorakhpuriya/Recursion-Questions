#include<iostream>
using namespace std;

int fibonacci(int n)
{
    // Base case
    if(n == 0 || n == 1)
    {
        return n;
    }
    
    // Recursion call
    int a = fibonacci(n-1);
    int b = fibonacci(n-2);

    // processing
    int finalAns = a+b;
    return finalAns;
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    int ans = fibonacci(n);
    cout<<"Answer is = "<<ans<<endl;
}
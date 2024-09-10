#include<iostream>
using namespace std;

int getFactorial(int n)
{
    // Base case
    if(n==0 || n==1)
    {
        return 1;
    }
    //recursion call
    int recursionAns = getFactorial(n-1);
    //processing
    int finalAns = n * recursionAns;
    return finalAns;
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    int ans = getFactorial(n);
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
}
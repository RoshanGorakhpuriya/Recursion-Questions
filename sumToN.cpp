#include<iostream>
using namespace std;

int getSum(int n)
{
    // Base Case
    if(n == 1)
    {
        return 1;
    }

    // Recursion Call
    int recursionAns = getSum(n-1);
    int finalAns = n + recursionAns;
    return finalAns;
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    int ans = getSum(n);
    cout<<"Sum is = "<<ans<<endl;
}
#include<iostream>
#include<math.h>
using namespace std;

int powerCalculation(int n)
{
    // Base case
    if(n == 0)
    {
        return 1;
    }

    // Recursion call 
    int recursionAns = powerCalculation(n-1);
    int finalAns = 2 * recursionAns;
    return finalAns;
}

int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    int ans = powerCalculation(n);
    cout<<ans<<endl;
}
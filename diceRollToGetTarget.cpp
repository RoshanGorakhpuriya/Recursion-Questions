#include<iostream>
using namespace std;

int solve(int n , int k , int target){
    // Base-case
    
    if(n == 0 && target == 0)
    {
        return 1;
    }

    if(n == 0 && target != 0)
    {
        return 0;
    }

    if(n != 0 && target == 0)
    {
        return 0;
    }

    // agr target negtaive m chle jaaye
    if(target < 0)
    {
        return 0;
    }

    // Recursion call
    int ans = 0;
    for(int i=1 ; i<=k ; i++){
        ans += solve(n-1 , k , target-i);
    }
    return ans;
}

int main(){
    int n=3;
    int k=2;
    int target=6;

    int ans = solve(n , k , target);

    cout<<"Number of ways to get target = "<<ans<<endl;
}
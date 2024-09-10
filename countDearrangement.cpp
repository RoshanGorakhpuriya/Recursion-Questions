#include<iostream>
using namespace std;

int countDearrangement(int n)
{
    if(n == 1)
    {
        return n-1;
    }

    if(n == 2)
    { 
        return n-1;
    }

    int option1 = (n-1) * countDearrangement(n-1);
    int option2 = (n-1) * countDearrangement(n-2);

    int ans = option1 + option2;
    return ans;
    //return (n-1) * (countDearrangement(n-1) + countDearrangement(n-2));
}

int main(){
    int n=4;

    int ans = countDearrangement(n);

    cout<<"Answer is = "<<ans<<endl;
}
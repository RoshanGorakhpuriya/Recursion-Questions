#include<iostream>
using namespace std;

int houseRobber(int nums[] , int n , int index)
{
    if(index >= n)
    {
        return 0;
    }
    // first le liya abb uske sath ek skip krke next pe jayenge
    int option1 = nums[index] + houseRobber(nums, n , index+2);
    // first ni liya uska next ko take krenge 
    int option2 = 0 + houseRobber(nums , n , index+1);

    int ans = max(option1 , option2);
    return ans;
}

int main(){
    int nums[5] = {2 , 7 , 9 , 3 , 1};

    int index = 0;

    int n = 5;

    int ans = houseRobber(nums , n , index);

    cout<<"Answer is = "<<ans<<endl;
}
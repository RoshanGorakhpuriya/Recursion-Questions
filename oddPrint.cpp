#include<iostream>
#include<vector>
using namespace std;

void printOddElement(int arr[] , int index , int n , vector<int>&ans)
{
    if(index == n)
    {
        return;
    }

    else if(arr[index]&1)
    {
        ans.push_back(arr[index]);
    }

    printOddElement(arr , index+1 , n , ans);
}

int main(){
    int arr[6] = {10 , 11 , 12 , 13 , 14 , 15};

    int index = 0;
    
    int n = 6;

    vector<int>ans;

    printOddElement(arr , index , n , ans);

    for(auto it : ans)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
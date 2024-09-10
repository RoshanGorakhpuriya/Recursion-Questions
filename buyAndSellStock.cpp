#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void minimumPrice(vector<int>& price , int index , int& minPrice , int& maxProfit)
{
    //Base case
    if(index == price.size())
    return;

    // Ek case solve kr do baki recursion sambhal lega

    if(price[index] < minPrice)
    {
        minPrice = price[index];
    }
    int todayProfit = price[index] - minPrice;
    if(todayProfit > maxProfit)
    {
        maxProfit = todayProfit;
    }

    // recursion Call
    minimumPrice(price , index+1 , minPrice , maxProfit);

    
}

int main(){
    vector<int>price{7 , 1 , 5 , 3 , 6 , 4};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    minimumPrice(price , 0 , minPrice , maxProfit);
    // cout<<"Minimum Price is = "<<minPrice<<endl;
    cout<<"Minimum Profit is = "<<maxProfit<<endl;
}
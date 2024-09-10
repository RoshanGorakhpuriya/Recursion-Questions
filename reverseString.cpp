#include<iostream>
using namespace std;

void reverseString(string &str , int n , int start , int end)
{
    if(start > end)
    {
        return;
    }

    swap(str[start] , str[end]);

    reverseString(str , n , start+1 , end-1);
}



int main(){
    string str = "abcdef";
    int n = str.length();
    int start = 0;
    int end = n-1;
    reverseString(str , n , start , end);
    cout<<str<<endl;
}
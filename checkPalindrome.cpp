#include<iostream>
using namespace std;

int checkPalindrome(string str , int start , int end)
{
    if(start > end)
    {
        return true;
    }
    if(str[start] != str[end])
    {
        return false;
    }
    int ans = checkPalindrome(str , start+1 , end-1);
    return ans;

}

int main(){
    string str = "racecar";

    int start = 0;

    int end = str.length()-1;

    int ans = checkPalindrome(str , start , end);

    if(ans)
    {
        cout<<"Yes ... palindrome\n";
    }
    else
    {
        cout<<"Not ... palindrome\n";
    }
}
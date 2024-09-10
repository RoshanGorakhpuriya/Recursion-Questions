#include<iostream>
using namespace std;

int lastOccu(string str , char ch , int index , int &res)
{
    // Base case;
    if(index >= str.length())
    {
        return res;
    }
    // check char
    if(str[index] == ch)
    {
        res = index;
    }
    // recurison call
    int ans = lastOccu(str , ch , index+1 , res);
    return ans; 
}

int main(){
    string str = "abcb";
    char ch = 'b';
    int index = 0;
    int res = -1;
    int ans = lastOccu(str , ch , index , res);
    cout<<"Last Occurence of "<<ch<<" is "<<ans<<endl;
}
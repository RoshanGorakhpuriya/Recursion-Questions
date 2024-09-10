#include<iostream>
using namespace std;

void printSubsequences(string &str , string output , int index)
{
    if(index == str.length())
    {
        cout<<output<<endl;
        return;
    }
    // add character
    char ch = str[index];
    //include ch
    printSubsequences(str , output+ch, index+1);
    // exclude ch
    printSubsequences(str , output , index+1);

}

int main(){
    string str = "abc";
    string output = "";
    int index = 0;
    printSubsequences(str , output , index);
}
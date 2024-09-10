#include<iostream>
using namespace std;

bool isMatch(string s , int si , string p , int pi){
    // Base case

    if(si == s.size() && pi == p.size()){
        return true;
    }

    if(si == s.size() && pi < p.size()){
        while(pi < p.size())
        {
            if(p[pi] != '*')
            {
                return false;
            }
            pi++;
        }
        return true;
    }

    if(s[si] == p[pi] || '?' == p[pi])
    {
        return isMatch(s , si+1 , p , pi+1);
    }

    if(p[pi] == '*')
    {
        // Two case banenge
        //case1 :  * ko null char ki tarah treat karenge
        bool caseA = isMatch(s , si , p , pi+1);
        if(caseA)
        return true;

        // case2 : * ko string s ke char s consume kara liya
        bool caseB = isMatch(s, si+1 , p , pi);
        return caseA || caseB;
    }

    // agr char match ni hote h
    return false;
}

int main(){
    string s = "**ab";
    string p = "abgg";

    int si = 0;
    int pi = 0;

    bool ans = isMatch(s , si , p  , pi);
    if(ans)
    {
        cout<<"Matched->True\n";
    }
    else
    {
        cout<<"Not matched->False\n";
    }
}
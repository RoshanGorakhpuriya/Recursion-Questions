#include<iostream>
#include<algorithm>
using namespace std;

string addRE(string& no1 , int p1 , string& no2 , int p2 , int carry){
    //Base case
    if(p1 <0 && p2 < 0)
    {
        // carry remain
        if(carry != 0){
            return string(1 , carry+'0');
        }
        return "";
    }
    // ek case solve krna h
    string ans = "";
    int first = p1>=0 ? (no1[p1] -'0') : 0;
    int second = p2>=0 ? (no2[p2] - '0') : 0;
    int sum = first+second+carry;
    int digit = sum%10;
    ans.push_back(digit + '0');
    carry = sum/10;

    ans += addRE(no1 , p1-1 , no2 , p2-1 , carry);
    return ans;
}

int main(){
    string no1 = "456";
    string no2 = "99";

    string ans = addRE(no1 , no1.length()-1 , no2 , no2.length()-1 , 0);
    reverse(ans.begin() , ans.end());
    cout<<"Answer is = "<<ans<<endl;
}
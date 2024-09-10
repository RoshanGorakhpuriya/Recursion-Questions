#include<iostream>
using namespace std;

void getDigit(int number)
{
    if(number == 0)
    {
        return;
    }
    getDigit(number/10);
    cout<<number%10<<endl;
}

int main(){
    int number = 389;

    getDigit(number);
}
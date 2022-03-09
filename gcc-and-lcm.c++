//done by ayamba bless
#include<iostream>
using namespace std;
int main(){
    int num1, num2, gcd, gcc=1;
    cout<<"enter two numbers:";
    cin>>num1;
    cin>>num2;
    for(int i=1; i<1000; ++i)
    {
        if((num1 % i==0)&&(num2 % i ==0))
        {
            gcc = i;
        }
    }

    cout<<"\nGCD of two numbers is :"<<gcd;
    cout<<"\nLCM of two numbers is :"<<(num1*num2)/gcd;
}
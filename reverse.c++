//done by ayamba bless
#include<iostream>
using namespace std;
int main(){
    int number, reverse=0;
    cout<<"input a number to reverse and press enter:";
    cin>>number;
    while(number!=0)
    {
        reverse = reverse*10;
        reverse = reverse + number%10;
        number = number/10;
   }
   cout<<"new reverse number is :"<<reverse;
   return 0;
}
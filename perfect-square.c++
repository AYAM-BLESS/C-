//done by ayamba bless
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int num, tempNum;
    cout<<"enter a number :";
    cin>>num;
    tempNum = sqrt(num);
    if(tempNum*tempNum==num)
    {
        cout<<"Yes its a perfect square";
    }
    else
    {
        cout<<"No its not a perfect square";
    }
    return 0;
}
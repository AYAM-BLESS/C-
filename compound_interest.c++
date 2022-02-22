//done by ayamba bless

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int PA,r,t,CI;
    cout<<"enter principal amount :";
    cin>>PA;
    cout<<"\n";
    cout<<"enter the rate :";
    cin>>r;
    cout<<"\n";
    cout<<"enter time :";
    cin>>t;
    //formula to calculate compound interest
    CI = PA*((1+r/100)^100*t)-PA;
    cout<<"compound interest = "<<CI;
    cout<<"\n";
    return 0;
}
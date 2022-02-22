//done by ayamba bless

#include<iostream>
using namespace std;
int main(){
    int P,R,T,SI;
    cout<<"enter the principal :";
    cin>>P;
    cout<<"\n";
    cout<<"enter the rate :";
    cin>>R;
    cout<<"\n";
    cout<<"enter the time :";
    cin>>T;
    cout<<"\n";
    
    //formula for simple interest

    SI = (P*R*T)/100;
    cout<<"simple interest = "<<SI;
    cout<<"\n";
    return 0;
}
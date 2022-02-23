//done by ayamba bless

#include<iostream>
using namespace std;
int main(){
    float fahrenheit, celcius;
    cout<<"\n enter the temperature in fahrenheit :";
    cin>>fahrenheit;
    //formula to calculate celcius from fahrenheit
    celcius = (fahrenheit - 32)*5/9;
    cout<<"\n the temperature in fahrenheit is = "<<fahrenheit<<endl;
    cout<<"\n the temperature in celcius is = "<<celcius<<endl;
    return 0;
}
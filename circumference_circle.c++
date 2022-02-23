//done by ayamba bless

#include<iostream>
using namespace std;
#define PI 3.142
int main (){
    float circumference, radius;
    cout<<"\n enter the radius in meters :";
    cin>>radius;
    // circumference of a circle is 
    circumference = 2*PI*radius;
    cout<<"\n circumference = "<<circumference<<"meter";
    return 0;
}
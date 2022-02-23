//done by ayamba bless

#include<iostream>
using namespace std;
#define PI 3.142
int main(){
    float area, circumference, radius;
    cout<<"\n enter the radius :";
    cin>>radius;
    //formula to calculate area of a cirle
    area = PI*radius*radius;
    cout<<"\n the area of the circle is = "<<area<<"square meter";

    //formula to calculate the circumference of the circle is
    circumference = 2*PI*radius;
    cout<<"\n circumference = "<<circumference<<"meter";
    return 0;
}
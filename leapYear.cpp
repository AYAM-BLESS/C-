//done by Ayamba Bless
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year to know if it is a leap year: ";
    cin>>year;
    if(year % 4 == 0 || year % 400 == 0 || year % 100 == 0)
    cout<<"This is a leap year"<<endl;
    else 
    cout <<"This is not a leap year"<<endl;
    return 0;
}
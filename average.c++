//done by ayamba bless

#include<iostream>
using namespace std;
int main(){
    int n;
    double average(0);
    cout<<"enter the number of values :";
    cin>>n;
    for(int i =0; i<n; i++)
    {
        int value;
        cin>>value;
        average += value;
    }
    average /= n;
    cout<<"Average is = "<<average;
    return 0;
}
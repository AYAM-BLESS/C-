//done by ayamba bless
#include<iostream>
using namespace std;
int main()
{
    int num, factorial=1;
    cout<<"enter number to find its factorial:";
    cin>>num;
    for(int a = 1; a<=num; a++)
    {
        factorial =  factorial*a;
    }
    cout<<"the factorial of the given number is = "<<factorial<<endl;
    return 0;
}
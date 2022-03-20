//done by ayamba bless
//A function that calls itself is known as a recursive function
// factorial of a given number

#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}

int main(){
    cout<< factorial(5);
}
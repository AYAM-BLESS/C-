//done by ayamba bless

#include<iostream>
using namespace std;
int add(int, int);
  int main(){ 
      int num1, num2, output;
      cout<<"enter two numbers:";
      cin>>num1;
      cin>>num2;
      output = add(num1, num2);

      cout<<"addition of two numbers = "<<num1<<" and "<<num2<<" = "<<output;
}
//defining the function add
int add(int n1, int n2)
{
    int result;
    result = n1 + n2;
    return result;
    return 0;
}
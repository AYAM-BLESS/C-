//done by Ayamba Bless
#include<iostream>
using namespace std;
int main(){
    char operation;
    float num1, num2;
    cout<<"Enter the operator either + or - or * or /:";
    cin>>operation;
    cout<<"Enter two operands";
    cin>>num1>>num2;
    switch(operation){
        case '+':
        cout<<num1+num2\n;
        break;
        case '-':
        cout<<num1-num2\n;
        break;
        case '*':
        cout<<num1*num2\n;
        break;
        case '/':
        cout<<num1/num2\n;
        break;
        default:
        /*if oprator is different from +, -, * or /, error message is shown*/
        cout<<"Error!! Operator is not correct";
        break;
    }
    return 0;
}
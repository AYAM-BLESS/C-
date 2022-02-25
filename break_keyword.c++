//done by ayamba bless
#include<iostream>
using namespace std;
int main(){
    //local variable declaration
    int num = 10;
    //do loop execution
    do {
        cout<<"value of number :"<<num<<endl;
        num = num + 1;
        if(num>15)
        {
            //end loop
            break;
        }
    } while(num<20);
    return 0;
}
//done by Ayamba Bless
//Pass by value
#include<iostream>
using namespace std;

void myFunc(int x){
    x = 100;
}
int main(){
    int var = 20;
    myFunc(var);
    cout<< var;
}
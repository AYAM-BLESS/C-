//done by Ayamba Bless
//Pass by reference
#include<iostream>
using namespace std;
void myFunc(int *x){
    *x = 200;
}
int main(){
    int var = 20;
    myFunc(&var);
    cout<< var;
}
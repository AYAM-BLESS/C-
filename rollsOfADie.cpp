//done by Ayamba Bless
//code that shows how to imitate 20 roll of a die
#include<iostream>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned) time(0));
    for(int i = 1; i<=20; i++){
        cout<<"i" , 1 + (rand()%6);
        if(i%5 == 0){
            cout<<"\n";
        }
    }
}
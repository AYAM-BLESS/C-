//done by ayamba bless
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   while(n>0){
       cout << n << endl;
       if(n % 5 ==0){
           cout << "Beep\n";
       } 
       n--;
   }
    return 0;
}
//done by ayamba bless
#include<iostream>
using namespace std;
int main(){
    int lenght, width, perimeter;
    cout<<"\nenter the lenght of the rectangle :";
    cin>>lenght;
    cout<<"enter the width of the rectangle :";
    cin>>width;
    //formula for perimeter
    perimeter = (lenght + width)*2;
    cout<<"the perimeter is = "<<perimeter<<endl;
    return 0;
}
//done by ayamba bless
//on the 18/03/2022
//calculating the volume 
#include<iostream>
using namespace std;
int volume(int l = 1, int w =1, int h = 1)
{
    return l*w*h;
}

int main (){
    cout << volume()<< endl;
    cout << volume(5) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(3, 7, 6) << endl;
}
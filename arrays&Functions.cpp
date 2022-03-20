//done by ayamba bless
//Arrays and Functions
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void printArray(int arr[], int size)
{
    for(int x = 0; x<size; x++){
        cout << arr[x];
    }
}

int main(){
    int myArr[3] = {42, 33, 88};
    printArray(myArr, 3);
}
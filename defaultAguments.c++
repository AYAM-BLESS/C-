//done by ayamba bless
//on the 18/03/2022
#include<iostream>
using namespace std;

int sum(int a, int b = 42)
{
    int result = a + b;
    return result;
}
int main ()
{
    int x = 20;
    int y = 43;
    //calling the function with both parameters
     int result = sum(x, y);
     cout << result << endl;

    //calling the function b 
    result = sum(x);
    cout << result << endl;
    return 0;
}
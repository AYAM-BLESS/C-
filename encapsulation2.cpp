//done by Ayamba Bless
//Access specifier
#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    string myData;
};
int main()
{
    myClass obj;
    obj.myData = "I love C++";
    cout<< obj.myData;
}
//done by Ayamba Bless
//Access specifier
#include<iostream>
#include<string>
using namespace std;
class myClass {
    public:
    string name;
};
int main(){
    myClass myObj;
    myObj.name = "Ayamba Bless";
    cout << myObj.name;
    return 0;
}
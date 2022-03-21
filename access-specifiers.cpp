//done by Ayamba Bless
//Access specifier
#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};
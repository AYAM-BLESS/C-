//done by Ayamba Bless
//Constructor
#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    myClass(){
    cout<<"Hello";
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
    private:
    string name;
};
int main(){
    myClass myObj;
    return 0;
}
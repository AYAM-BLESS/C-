//done by Ayamba Bless
//constructor
#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    myClass(string nm){
        setName(nm);
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
    myClass ob1("Ayamba");
    myClass ob2("Bless");
    cout << ob1.getName();
}
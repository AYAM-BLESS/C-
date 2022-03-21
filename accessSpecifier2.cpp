//done by Ayamba Bless
//putting all together (access specifier)
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

int main(){
    myClass myObj;
    myObj.setName("Ayamba");
    cout << myObj.getName();
    return 0;
}
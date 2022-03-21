//done by Ayamba Bless
//private
#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    void setName (string x){
        name = x;
    }
    private:
    string name;
};
int main(){
    myClass myObj;
    myObj.setName("Ayamba");
    return 0;
}
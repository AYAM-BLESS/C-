//done by Ayamba Bless
#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Input a character:";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        cout<<ch<<"is a vowel.";
        break;
        default:
        // if letter entered is not in the switch cases display and error message that it's not a vowel but a consonant
       cout<<\n;
        cout<<ch<<" is not a vowel but a consonant";
    }
    return 0;
}
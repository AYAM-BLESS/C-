//done by Ayamba Bless
//A palindromic numbers is a number (such as 626) that remains the same when its digits are reversed
//code

#include<iostream>
using namespace std;
bool isPalindrome(int x){
    static int rev = 0;
    static int num = x;
    if(x==0){
        return (num == rev);
    }
    rev = rev * 10 + x % 10;
    return isPalindrome(x/10);
    }
}
int main(){
    int n;
    cin >> n;
    if(isPalindrome(n)){
        cout <<n<<"is a palindrome";
    }
    else{
        cout<<n<<"is Not a palindrome";
    }
    return 0;
}
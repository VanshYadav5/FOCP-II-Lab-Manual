#include <iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    int n = x.length();
    bool isPalindrome=true;

    for (int i=0;i<n/2;i++) {
        if (x[i]!=x[n-i-1]) {
            isPalindrome=false;
            break;
        }
    }

    if (isPalindrome)
        cout<<"Palindrome";
    else
        cout<<"Is not Palindrome";
    return 0;
}
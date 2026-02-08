#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, temp, digit, sum = 0;
    cin>>n;
    temp=n;
    int digits=0;

   
    while (temp!=0) {
        digits++;
        temp/=10;
    }
    temp=n;
    while (temp!=0) {
        digit=temp%10;
        sum+=pow(digit, digits);
        temp/=10;
    }

    if (sum == n)
        cout<<"Armstrong Number";
    else
        cout<<"Is not Armstrong Number";

    return 0;
}
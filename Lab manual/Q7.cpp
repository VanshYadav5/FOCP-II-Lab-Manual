#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter 3 player scores ";
    cin>>a>>b>>c;
    if (a>b & a>c)
    cout<<"a is winner\n";
    if (b>a & b>c)
    cout<<"b is winner\n";
    if (c>a & c>b)
    cout<<"c is winner\n";
}
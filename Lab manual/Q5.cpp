#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    int c = a;
    a = b;
    b = c;
    cout<<"Number after swapping "<<a<<endl<<b;
}
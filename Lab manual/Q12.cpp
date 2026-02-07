#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter sides of the triangle ";
    cin>>a>>b>>c;

    if(a==b&&b==c){
        cout<<"Triangle is equilateral\n";
    }
    else if (a != b && b != c && a != c){
    cout << "Scalene Triangle\n";
    }
    else if(a==b && b!=c || b==c && c!=a){
        cout<<"Triangle is isoceles";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    
    int year;
    cout<<"Enter your Year ";
    cin>>year;
    
    if(year%400==0){
        cout<<"Year is leap year\n";
    }
    

    else if (year%4==0 && year %100!=0){
        cout<<"Year is leap year\n";
    }
    else {
        cout<<"Year is not leap year\n";
    }
    return 0;

    
}
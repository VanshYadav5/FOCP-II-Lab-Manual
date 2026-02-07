#include <iostream>
using namespace std;
int main(){
    
   int T;
   cout<<"Enter item total ";
   cin>>T;
    
    if(T>1000){
        cout<<"Final Total is after discount\n";
        cout<<T-(T*0.1)<<"\n";
    }
    
    
    else {
        cout<<"Total is Without discount";
    }
    return 0;

    
}
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    double D,root;
    D=(b*b-(4*a*c));
    root=sqrt(D);
    if(D>0){
        int root1= (-b+sqrt(D))/2*a;
        int root2=(-b-sqrt(D))/2*a;
        cout<<"root 1 is "<<root1<<"root 2 is "<<root2;
    }
    else if(D==0){
        int root3=-b/2*a;
        cout<<"root is "<<root3;
    }
    else{
        cout<<"No real roots\n";
    }
    return 0;
    
    
}
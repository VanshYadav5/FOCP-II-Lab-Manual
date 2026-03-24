#include <iostream>
using namespace std;
int main(){
    int n[5],sum=0;
    for(int i=0;i<5;i++){
        cout <<"give the value of n["<<i<<"] : ";
        cin>>n[i];}
    for(int i=0;i<5;i++)
    {sum=sum+n[i];         }
    cout<<sum;
    return 0;
    
}
#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i;
    for(i=1;i<=N;i++)
        if(i%3==0 && i%5==0){
        cout<<"BuzzFuzz\n";
        }
        else if(i%3==0){
        cout<<"Buzz\n";
        }
        else if (i%5==0){
        cout<<"Fuzz\n";
        }
        else{
            cout<<i<<"\n";
        }
        return 0;
       
}
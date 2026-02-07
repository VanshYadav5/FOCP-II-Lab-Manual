#include <iostream>
using namespace std;
int main(){
    
    char L;
    cin>>L;
    
    if(L=='a'|| L=='i' || L=='e' || L=='o' || L=='u'){
        cout<<"Input is vowel\n";
    }
    

    else if (L>='a'&& L<='z'){
        cout<<"Input is consonant\n";
    }
    else if(L>='0'&& L<='9'){
        cout<<"Input is number\n";
    }
    return 0;

    
}
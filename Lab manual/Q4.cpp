#include <iostream>
using namespace std;
int main(){
    int Quantity;
    int price;
    int itemcode;
    cout<<"Enter the item code 1 or 2 and quantity ";
    cin>>itemcode>>Quantity;
    if(itemcode==1){
        price = 1000;
    }
    else{
        price = 2000;
    }
    int totalprice = price+Quantity;
    float ToPay = 0.2*totalprice;
    cout<<"The amount to pay after discount is "<<ToPay;
}

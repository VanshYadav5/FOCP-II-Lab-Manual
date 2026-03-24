#include <iostream>
using namespace std;

class Car {
    public:
    float price;
    string brand;
    int make;
    void input(){
        cout<<"Enter brand, price, make:"<< endl;
        cin>>brand>>price>>make;
    }
    void display(){
        cout<<"\nBrand: "<<brand<<"\nPrice: "<<price<<"\nMake: "<<make<<endl;
    }
};
int main(){
    Car c1;
    c1.input();
    c1.display();

    Car c2;
    c2.input();
    c2.display();
    return 0;
}
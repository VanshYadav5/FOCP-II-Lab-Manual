#include <iostream>
using namespace std;
class Car{
    string brand;
    int price;
    string color;
public:
    void input_info(){
    cout<<"Enter the brand price and color of the car";
    cin>>brand>>price>>color;

    }

    void show_info(){
        cout<<"brand"<<brand<<"price: "<<price<<"color: "<<color;
    }
};
int main(){
    Car c1;
    c1.input_info();
    c1.show_info();
}
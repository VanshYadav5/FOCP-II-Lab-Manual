#include<iostream>
using namespace std;
class Candy{
    string color;
    int points;
    public:
    void setCandy(string c, int p);
    void displayCandy();
    Candy();
    Candy(string c1,int pt);
};
void Candy :: setCandy(string c,int p){
    color = c,points =p;

}
void Candy :: displayCandy(){
      cout<<"\n color is "<<color;
      cout<<"\n points are "<<points;
}
Candy:: Candy(){
    color = "black";
    points = 50;
}
Candy:: Candy(string c1,int pt){
    color = c1,points = pt;
}
int main(){
    Candy c1("green",23);
    c1.displayCandy();

}
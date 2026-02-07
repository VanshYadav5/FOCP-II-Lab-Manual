#include <iostream>
using namespace std;
int main(){
    int employee;
    int basesalary;
    cout<<"Enter number of employee and base salary ";
    cin>>employee>>basesalary;
    float TotalSalary = employee * (basesalary+0.12*basesalary);
    cout<<"Total salary is "<<TotalSalary;
}
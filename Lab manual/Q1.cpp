#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float avg;
    cout << "Enter marks of student 1: ";
    cin >> a;

    cout << "Enter marks of student 2: ";
    cin >> b;

    cout << "Enter marks of student 3: ";
    cin >> c;

   
    avg = (a + b + c) / 3.0;

    
    cout << "Average marks = " << avg;

    return 0;
}
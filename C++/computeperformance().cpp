#include <iostream>
using namespace std;

void computePerformance(int marks[], int size) {
    int sum=0;
    int min=marks[0];
    int max=marks[0];

    for(int i=0;i<size;i++) {
        sum=sum+marks[i];

        if(marks[i]<min) {
            min=marks[i];
        }

        if(marks[i]>max) {
            max=marks[i];
        }
    }

    double average=(double)sum/size;

    cout<<"\nAverage Marks = "<<average<<endl;
    cout<<"Minimum Marks = "<<min<<endl;
    cout<<"Maximum Marks = "<<max<<endl;
}

int main() {
    int marks[10];

    cout<<"Enter marks for 10 subjects:\n";
    for(int i=0;i<10;i++) {
        cin>>marks[i];
    }

    computePerformance(marks, 10);

    return 0;
}
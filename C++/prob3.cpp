#include <iostream>
using namespace std;
void findMinMax(int arr[],int size,int &X,int &Y)
{
    X=arr[0];
    Y=arr[0];

    for(int i=1;i<size;i++)
    {
        if(arr[i]<X)
            X=arr[i];

        if(arr[i]>Y)
            Y=arr[i];
    }
}

int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for (int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    int X,Y;
    findMinMax(arr,n,X,Y);

    cout<<"Minimum value="<<X<<endl;
    cout<<"Maximum value="<<Y<<endl;

    return 0;
}
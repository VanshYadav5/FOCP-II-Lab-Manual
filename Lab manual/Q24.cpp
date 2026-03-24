#include<iostream>
int main()
{
    int num;
    std::cout<<"enter the number of rows you want:";
    std::cin>>num;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<char('A'+j);
        }
        std::cout<<std::endl;
    }
    return 0;
}
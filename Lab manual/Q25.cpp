#include<iostream>
#include<string>
int main()
{
    std::string str;
    std::cout<<"ENTER THE PASSWORD:";
    std::cin>>str;
    bool is_upper=false,is_lower=false,is_char=false,is_digit=false;
    for(char c:str)
    {
        if(isupper(c))
        is_upper=true;
        else if(islower(c))
        is_lower=true;
        else if(isdigit(c))
        is_digit=true;
        else 
        is_char=true;
    }
    if(is_upper && is_lower && is_digit && is_char)
    std::cout<<"\nTHE PASSWORD IS VALID";
    else 
    std::cout<<"\nINVALID PASSWORD! ENTER A SAFER PASSWORD";
    return 0 ;
}
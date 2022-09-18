#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<endl<<"Enter any integer: ";
    cin>>num;

    if(num%2==0)
    {
       cout<<endl<<num<<" is  Even Number";
    }
    else
    {

       cout<<endl<<num<<" is Odd Number";
    }

    return 0;
}
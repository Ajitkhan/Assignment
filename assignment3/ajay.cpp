#include<iostream>
using namespace std;
int main()
{
    int ram, shyam, ajay;

    cout<<endl<<"Enter the age of Ram: ";
    cin>>ram;

    cout<<endl<<"Enter the age of Shyam: ";
    cin>>shyam;

    cout<<endl<<"Enter the age of Ajay: ";
    cin>>ajay;

    if (ram<=shyam)
    {
        if(ram<=ajay)
        {
            cout<<endl<<"Ram is the Youngest";
        }
        else
        {
            cout<<endl<<"Ajay is the Youngest";
        }
    }
    else if(shyam<=ajay)
    {
        cout<<endl<<"Shyam is the Youngest";
    }
    else
    {
        cout<<endl<<"Ajay is the Youngest";
    }
    return 0;
}
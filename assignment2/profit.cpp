#include <iostream>
using namespace std;

int main()
{
    int s, p, c;  

    cout<<endl<<"Enter the selling price of 15 items: ";
    cin>>s;
    cout<<endl<<"Enter the profit on 15 items: ";
    cin>>p;

    c = (s-p)/15;

    cout<<endl<<"\n The cost price of an item is "<<c;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int l, b, r,ca, cc, ra, rp;

    
    cout<<endl<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<endl<<"Enter the breadth of rectangle: ";
    cin>>b;


    cout<<endl<<"Enter the radius of circle: ";
    cin>>r;

    
     ra = l * b;    
     rp = 2 * (l + b);    

     
     ca = 3.14 * r * r;   
     cc = 2 * 3.14 * r;  

     cout<<endl<<"\nThe area of the rectangle: "<<ra;
     cout<<endl<<"\nThe perimeter of the rectangle: "<<rp;
     cout<<endl<<"\n\nThe area of the circle: "<<ca;
     cout<<endl<<"\nThe circumference of the circle: "<<cc;

     return 0;
}
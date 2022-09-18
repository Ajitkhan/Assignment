#include <iostream>
using namespace std;

int main()
{
    float l, b, r,ca, cc, ra, rp;

    //For rectangle
    cout<<endl<<"Enter the length of rectangle: ";
    cin>>l;
    cout<<endl<<"Enter the breadth of rectangle: ";
    cin>>b;

    //For circle
    cout<<endl<<"Enter the radius of circle: ";
    cin>>r;

    //Calculate area & perimeter of the rectangle...
     ra = l * b;    //Area of Rectangle = Length x Breadth
     rp = 2 * (l + b);    //Perimeter of Rectangle = 2 x (Length + Breadth) or addition of all sides

     //Calculate are & circumference of the circle...
     ca = 3.14 * r * r;   //Area of Circle = 2 x Pi x r^2 where Pi = 3.14
     cc = 2 * 3.14 * r;  //Circumference of Circle = 2 x Pi x r

     cout<<endl<<"\nThe area of the rectangle: "<<ra;
     cout<<endl<<"\nThe perimeter of the rectangle: "<<rp;
     cout<<endl<<"\n\nThe area of the circle: " <<ca;
     cout<<endl<<"\nThe circumference of the circle: "<<cc;

     return 0;
}
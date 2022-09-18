#include<iostream>
using namespace std;
int main()
{
    int a, b, c, sum;
    cout<<endl<<"Enter three angles of a triangle: ";
    cin>>a>>b>>c ;
    sum = a+b+c;

    if (sum == 180)
        cout<<endl<<"Triangle is valid";
    else
        cout<<endl<<"Triangle is not valid";

    return 0;
}
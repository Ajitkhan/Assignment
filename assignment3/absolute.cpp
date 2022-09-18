#include<iostream>
using namespace std;
int main()
{
    int n, num;

    cout<<endl<<"Enter a number: ";
    cin>>n;
    num = n;
    
    if(num<0)
    {
        num = (-1)*num;
    }
    

    cout<<endl<<"The absolute value of is "<<n<<num;
    return 0;
}
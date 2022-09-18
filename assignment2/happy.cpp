#include <iostream>
using namespace std;

int main()
{
    int numb=0, n;
    cout<<endl<<"Enter a number: ";
    cin>>n;

    while(n!=0)
    {
        numb = numb * 10;
        numb = n % 10 + numb;
        n = n/10;
    }
    cout<<endl<<numb;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int num, sum, i, number, count=0, n=1;

    cout<<endl<<"Enter N Digit's Number: ";
    cin>>num;

    number = num;

    while(number!=0)
    {
        number = number/10;
        count = count + 1;
    }

    for(i=1;i<count;i++)
    {
        n = n * 10;  
        n = n + 1;   
    }

    sum = num + n;
    cout<<endl<<"Output: "<<sum;

    return 0;
}

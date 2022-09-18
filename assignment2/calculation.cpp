#include <iostream>
using namespace std;

int main(){
    int n1,n2,add,sub,mul;
    float div;

    cout<<endl<<"Enter a no.:";
    cin>>n1;

    cout<<endl<<"Enter another no:";
    cin>>n2;

    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;

    cout<<endl<<"ADDITION ="<<add;
    cout<<endl<<"SUBTRACTION ="<<sub;
    cout<<endl<<"MULTIPLICATION ="<<mul;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int num,a,b,c,d,e;
	cout<<endl<<"Enter a five digit number : ";
	cin>>num;
	e=num%10;
	d=num/10%10;
	c=num/100%10;
	b=num/1000%10;
	a=num/10000;
	cout<<endl<<" is the sum of the digits of the number "<<a+b+c+d+e<<num;
	
	return 0;
}
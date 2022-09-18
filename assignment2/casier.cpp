#include <iostream>
using namespace std;

int main()

{

int amount;


cout<<endl<<"Enter the amount to be withdrawn (in hundreds): ";

cin>>amount;

cout<<endl<<"\n\nRequired notes of Rs. 100 : "<<amount / 100;


cout<<endl<<"\n\nRequired notes of Rs. 50 : "<<amount % 100 / 50;


cout<<endl<<"\n\nRequired notes of Rs. 10 : "<<(amount % 100) % 50 / 10;

cout<<endl<<"\n\nAmount still remaining Rs. : "<<(amount % 100) % 50 % 10;

return 0;

}
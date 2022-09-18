#include <iostream>
using namespace std;

int main()
{
    int C, D, T;
     cout<<endl<<"Enter the value of C: ";
     cin>>C;

     cout<<endl<<"Enter the value of D: ";
     cin>>D;

     C = C+D; 
     D = C-D; 
     C = C-D;  
     
    cout<<endl<< "The value of C: "<<C;
    cout<<endl<< "The value of D: "<<D;
    
    return 0;
}
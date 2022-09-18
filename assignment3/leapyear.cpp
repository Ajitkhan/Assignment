#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<endl<<"Enter the Year: ";
    cin>>year;

    //if year is completely divisible via 4
    if (year % 4 == 0)
    {
        //if year is completely divisible via 4 and 100
        if (year % 100 == 0)
        {
            //if year is completely divisible via 4, 100, and 400
            if (year % 400 == 0)
            {
                cout<<endl<<year<<" is a Leap Year";
            }

            else
            {
                cout<<endl<<year<<" is not a Leap Year";
            }
        }
        else
        {
            cout<<endl<<year<<" is a Leap Year";
        }
    }
    else
    {
        cout<<endl<<year<<" is not a Leap year";
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    
    int year, basic_year=1900, leap_year, remaining_year, total_days, day;

    cout<<endl<<"Enter the year: ";
    cin>>year;

    year = (year-1)-basic_year; 

    leap_year = year/4;

    
    remaining_year = year - leap_year;

    
    total_days = (remaining_year*365) + (leap_year*366) + 1;

    
    day = total_days%7;

    if(day==0)
        cout<<endl<<"Monday";
    else if(day==1)
        cout<<endl<<"Tuesday";
    else if(day==2)
        cout<<endl<<"Wednesday";
    else if(day==3)
        cout<<endl<<"Thursday";
    else if(day==4)
        cout<<endl<<"Friday";
    else if(day==5)
        cout<<endl<<"Saturday";
    else if(day==6)
        cout<<endl<<"Sunday";
    else
        cout<<endl<<"Wrong Entry";
    return 0;
}
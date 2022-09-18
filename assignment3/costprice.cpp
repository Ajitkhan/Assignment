#include<iostream>
using namespace std;

int main()
{
    int cost_price, selling_price, profit, loss;

    cout<<endl<<"Enter the cost price of an item: ";
    cin>>cost_price;

    cout<<endl<<"Enter the selling price of an item: ";
    cin>>selling_price;

    if (selling_price > cost_price)  
    {
       
        profit = selling_price - cost_price;
        cout<<endl<<"We earn profit by selling item."<<profit;

    }

    else if (selling_price < cost_price)   
    {
       
        loss = cost_price - selling_price;
        cout<<endl<<"\n We incurred loss on selling item."<<loss;
    }

    else    //here we don't get any loss and profit on selling item when (cost price == selling price)
    {
        cout<<endl<<"\nWe don't get any loss and profit on selling item";
    }

}
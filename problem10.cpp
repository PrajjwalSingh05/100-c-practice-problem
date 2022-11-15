#include<iostream>
using namespace  std;
int main()
{
    int cost_price,selling_price;
    cout<<"Enter Cost Price";
    cin>>cost_price;
    cout<<"ENTER Selling Price";
    cin>>selling_price;
    int result=selling_price-cost_price;
    if(result>=0)
    {
        cout<<"you made a profit of "<<result;
    }
    else{

        cout<<"you made loss of "<<result;
    }
    return 0;
}

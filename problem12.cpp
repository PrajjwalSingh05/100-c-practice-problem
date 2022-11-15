// pier2h
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float radius,height;
    cout<<"Enter Radius";
    cin>>radius;
    cout<<"enter Height";
    cin>>height;
    float volume=3.14*(pow(radius,2)*height);
    cout<<"Volume is :"<<volume<<endl;
    float cost=volume*40;
    cout<<"cost is :"<<cost;
    return 0;


}
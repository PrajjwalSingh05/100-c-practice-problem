#include<iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3;
    cout<<"Enter Your Angele";
    cin>>angle1;
    cout<<"Enter Your Angele";
    cin>>angle2;
    cout<<"Enter Your Angele";
    cin>>angle3;
    int allangle=angle1+angle2+angle3;
    if(allangle==180){
        cout<<"Traingle can be formed";
    }
    else{
        cout<<"Traingle cant be formed";
    }
}
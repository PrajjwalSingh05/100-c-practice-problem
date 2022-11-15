#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int horu,minute;
    cout<<"Enter hour";
    cin>>horu;
    cout<<"Enter min";
    cin>>minute;
    float h=( horu %12+ (float) minute/60)*30;
    float m=minute*6;
    float angel=fabs(h-m);
    if( angel>180){
        cout<<"The angle is "<<360-angel;
    }
    else{
        cout<<"The angel is :"<<angel;
    }
}
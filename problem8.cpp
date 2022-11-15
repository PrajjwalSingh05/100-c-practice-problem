#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1,x2,y1,y2;
    cout<<"Enter x1 distance";
    cin >>x1;
    cout<<"Enter x2 distance";
    cin >>x2;
    cout<<"Enter y1 distance";
    cin>>y1;
    cout<<"Enter y2 distance";
    cin>>y2;
    
    int xcoordinate=pow((x2-x1),2);
    int ycoordinate=pow((y2-y1),2);
    int answer=sqrt((xcoordinate+ycoordinate));
    cout<<"Eculid distance is "<<answer;
    return 0;

}
#include<iostream>
using namespace std;
int main()
{
    int temperatue,humid;
    cout<<"Enter Tempersture";
    cin>>temperatue;
    cout<<"Enter humid";
    cin>>humid;
    if(temperatue>=30 && humid>=90)
    {
        cout<<"Hot and humid";
    }
    else if (temperatue>=30 && humid<90)
    {
        cout<<"Hot";
    }
    else if(temperatue<30 && humid>=90)
    {
        cout<<"cool and humid";
    }
    else if( temperatue>30 && humid <90)
    {
        cout<<"Cool";
    }
    else{
        cout<<"wrong input";
    }
    return 0;
}
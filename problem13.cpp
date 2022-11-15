#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(num%3==0 && num%6==0)
    {
        cout<<"number is divisible by 3 and 6";
    }
    else{
        cout<<"number is not divisible";
    }
    return 0;
}
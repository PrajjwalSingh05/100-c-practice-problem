#include<iostream>
using namespace std;
void cm_to_feet()
{
    int value;
    cout<<"Enter the cm value";
    cin>> value;
    float feet_value=value*	0.032808399;
    cout<<"The value in Feet is "<<feet_value<<endl;
}
void  kl_to_ml()
{
    int kl_value;
    cout<<"Enter the KL value";
    cin>> kl_value;

    float miles_value=kl_value*0.6213711922;
    cout<<"The value in Miles is "<<miles_value<<endl;

}
void usd_to_inr()
{
     int usd_value;
    cout<<"Enter the USD value";
    cin>> usd_value;

    float inr_value=usd_value*83.575;
    cout<<"The value in INR is "<<inr_value<<endl;


}
int main()
{
    int choice;
    
    while(true){
        cout<<"The choices are-:"<<endl;
        cout<<"1.CM to Feet-:"<<endl;
        cout<<"2.KL to Miles-:"<<endl;
        cout<<"3.USD to INR-:"<<endl;
        cout<<"4.Exit-:"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
            cm_to_feet();
            break;
            case 2:
            kl_to_ml();
            break;
            case 3:
            usd_to_inr();
            
            break;
            case 4:
            exit;
            break;
            default:
            cout<<"Wrong Input"<<endl;
            break;
        }
        
    }
}


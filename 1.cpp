#include <iostream>
using namespace std;

bool divisibleBy3_6( int number){
    if (number % 3==0 && number % 6 == 0){
        return true;
    }else{
        return false;
    }

}
int main(){
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;
    if (divisibleBy3_6(number)){
        cout<<number<<"is divisible by 3 & 6"<<endl;
    }else{
        cout<<number<<"is not divisible by 3 & 6"<<endl;
    }
    return 0;
}
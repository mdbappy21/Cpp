#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    int sum=num1+num2;
    cout<<"Sum of two numbers : "<<sum<<endl;

    int sub=num1-num2;
    cout<<"Subtraction of two numbers : "<<sub<<endl;

    int multi=num1*num2;
    cout<<"Multiplecation is : "<<multi<<endl;

    int div=num1/num2; 
    cout<<"Divition is : "<<div<<endl;

    double rem=num1 % num2;
    cout<<"Remainder is : "<<rem<<endl;
}
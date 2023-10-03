#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;

    cout<<showpoint;  //showing point .
    cout<<fixed;
    cout<<setprecision(2);//without fixed before and after point ... with fixed after point
    float sum=num1+num2;
    cout<<setw(30)<<"Sum of two numbers : "<<sum<<endl;

    //cout<<noshowpoint;   //hide point
    float sub=num1-num2;
    cout<<setw(30)<<"Subtraction of two numbers : "<<sub<<endl;

    float multi=num1*num2;
    cout<<setw(30)<<"Multiplecation is : "<<multi<<endl;

    float div=num1/num2;
    cout<<setw(30)<<"Divition is : "<<div<<endl;
}
#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two number : ";
    cin>>num1>>num2;

    int max=(num1>num2)?num1:num2;
    cout<<"Largest number is : "<<max<<endl;
    (num1%2==0)?cout<<num1<<" is even"<<endl:cout<<num1<<" is odd"<<endl;
    (num2%2==0)?cout<<num2<<" is even"<<endl:cout<<num2<<" is odd"<<endl;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double c,f,k;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<"Enter Celsius Temperature : ";
    cin>>c;
    cout<<"Kelvin Temperature is : "<<c+273<<endl;
    cout<<"Fahrenheit Temperature is : "<<(c*1.8)+32<<endl<<endl;

    cout<<"Enter Fahrenheit Temperature : ";
    cin>>f;
    cout<<"Celsius Temperature is : "<<(f-32)/1.8<<endl;
    cout<<"Kelvin Temperature is : "<<((f-32)/1.8)+273<<endl<<endl;


    cout<<"Enter Kelvin Temperature : ";
    cin>>k;
    cout<<"Celsius Temperature is : "<<k-273<<endl;
    cout<<"Kelvin Temperature is : "<<((k-273)*1.8)+32<<endl<<endl;
}

#include <iostream>
using namespace std;

int main(){
    int x=10,y=6;
    x+=y;
    cout<<"Summation X and Y = "<<x<<endl;

    x-=y;
    cout<<"Subtraction X and Y = "<<x<<endl;

    x*=y;
    cout<<"Multiplication X and Y = "<<x<<endl;

    x/=y;
    cout<<"Divition X and Y = "<<x<<endl;

    x%=y;
    cout<<"Remainder X and Y = "<<x<<endl;
}
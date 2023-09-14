#include <iostream>
using namespace std;

int main(){
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    int c=sizeof (a);
    cout<<"Size of a : "<<c<<endl;
    int e=sizeof (ch);
    cout<<"Size of name : "<<e<<endl;


    int x,y,sum;
    sum=(x=10,y=20,sum=x+y);  // comma , and size of operetor.
    cout<<"Sum : "<<sum<<endl;
}
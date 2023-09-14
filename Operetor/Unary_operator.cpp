#include <iostream>
using namespace std;

int main(){
    int x=5,y;

    y=-x;
    cout<<"Unary minus : "<<y<<endl;

    y=+x;
    cout<<"Unary plus : "<<y<<endl;

    y=++x;
    cout<<"Pre increment : "<<y<<endl;
    y=x++;
    cout<<"Post increment : "<<y<<endl;

    y=--x;
    cout<<"Pre decrement : "<<y<<endl;
    y=x--;
    cout<<"Post decrement : "<<y<<endl;

    y=x;
    cout<<"Post decrement test : "<<y<<endl;
    return 0;
}
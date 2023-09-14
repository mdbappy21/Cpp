#include <iostream>
using namespace std;

int main(){
    int a=32,b=12,c;

    c=a&b;//Bit by bit calculate and operetion.
    cout<<"Bitwise AND : "<<c<<endl;

    c=a|b;//bit by bit calculate or operetion.
    cout<<"Bitwise OR : "<<c<<endl;

    c=a^b;//bit by bit calculate x-or operetion.
    cout<<"Bitwise X-OR : "<<c<<endl;

    c=a>>2;//right shift means that divide by shifting value.
    cout<<"Bitwise Right Shifting : "<<c<<endl;

    c=a<<2;//left shift means that multiply by shifting value.
    cout<<"Bitwise Lett Shifting : "<<c<<endl;

    c=~a;//increase 1 and then negative the value.
    cout<<"Bitwise Not : "<<c<<endl;

    return 0;
}
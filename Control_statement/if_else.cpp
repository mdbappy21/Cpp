#include <iostream>

using namespace std;

int main() {
    int x, y, max;
    cout << "Enter two Number : ";
    cin >> x >> y;
    if (x > y) {
        max = x;
        cout << "Maximum Num is : " << max << endl;
    } else if (y > x) {
        max = y;
        cout << "Maximum Num is : " << max << endl;
    } else
        cout<<"The Numbers are equal";
    return 0;
}
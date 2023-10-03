#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter any Year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        cout << "The year is leap Year" << endl;
    else
        cout << "The year isn't leap Year" << endl;

}
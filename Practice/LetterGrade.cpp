#include <iostream>

using namespace std;

int main() {
    int mark;
    cout << "Enter Your Marks : ";
    cin >> mark;

    if (mark > 100 || mark < 0)
        cout << "Invalid Number!" << endl;
    else if (mark >= 80)
        cout << "Your Grade : A+" << endl;
    else if (mark >= 75)
        cout << "Your Grade : A" << endl;
    else if (mark >= 70)
        cout << "Your Grade : A-" << endl;
    else if (mark >= 65)
        cout << "Your Grade : B+" << endl;
    else if (mark >= 60)
        cout << "Your Grade : B" << endl;
    else if (mark >= 55)
        cout << "Your Grade : C" << endl;
    else if (mark >= 50)
        cout << "Your Grade : C-" << endl;
    else if (mark >= 45)
        cout << "Your Grade : D" << endl;
    else
        cout<<"you are Fail in this course."<<endl;
}
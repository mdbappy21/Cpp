#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Enter any letter : ";
    cin >> c;

    c= tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout<<"The letter is Vowel"<<endl;
    else
        cout<<"The letter is consonent"<<endl;

    return 0;
}
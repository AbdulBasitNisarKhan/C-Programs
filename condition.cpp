#include <iostream>
#include <cctype> // it is for charecter
using namespace std;

int main()
{
    char a;

    cout << "Enter the character" << endl;
    cin >> a;
    // 48 to 57 for digit
    // 65 to 90 for uppercase
    // 97 to 122 for lowercase

    if (a >= 48 && a <= 57)
    {
        cout << "Its a digit " << a << endl;
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "Its an uppercase letter " << a << endl;
    }
    else if (a >= 97 && a <= 122)
    {
        cout << "Its an lowercase letter " << a << endl;
    }
    else
    {
        cout << "Its a special charecter " << a << endl;
    }
}
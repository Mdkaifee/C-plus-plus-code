#include <iostream>

using namespace std;

int main()

{

    char ch;

    cout << "Enter a character: ";

    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')

    {

        cout << ch << " is an upper case letter ";
    }

    else if (ch >= 'a' && ch <= 'z')

    {

        cout << ch << " is a lower case letter ";
    }

    else

    {

        cout << ch << " is not an Alphabets ";
    }
}
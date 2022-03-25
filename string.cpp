#include <iostream>
#include<string>
using namespace std;
int main()
{
    string firstname, lastname, address;
    cout << "Enter first name:";
    cin >> firstname;
    cout << "Enter last name:";
    cin >> lastname;
    cout << "Enter Address:";
    cin >> address;//getline(cin,address);(this shoulde be after declaration of var)
    string fullname = firstname + lastname;
    cout << "Your details" << endl
         << fullname << endl
         << address;
}

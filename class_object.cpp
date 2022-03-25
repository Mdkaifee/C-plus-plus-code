#include <iostream>
#include <string>
using namespace std;

class Youtuber
{
public:
    string username;
    int subscribers;
};

int main()
{
    // object 1
    Youtuber codepalace;
    codepalace.subscribers = 100;
    codepalace.username = "codepalace";
    // object 2
    Youtuber code_with_kaifee;
    code_with_kaifee.subscribers = 1000;
    code_with_kaifee.username = "code with kaifee";
    cout << codepalace.username << " has " << codepalace.subscribers << " subscribers " << endl;
    cout << code_with_kaifee.username << " has " << code_with_kaifee.subscribers << " subscribers ";
}
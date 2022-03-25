#include <iostream>
#include <string>
using namespace std;

class Youtuber
{
public:
    string username;
    int subscribers;
    void makeVideo(string date){
        cout<<username<< " is making a video "<< date <<"!"<<endl;
    }
};

int main()
{
    // object 1
    Youtuber codepalace;
    codepalace.subscribers = 100;
    codepalace.username = "codepalace";
    codepalace.makeVideo(date:"tomorrow");
    // object 2
    Youtuber code_with_kaifee;
    code_with_kaifee.subscribers = 1000;
    code_with_kaifee.username = "code with kaifee";
    codepalace.makeVideo(date:"today");
    cout << codepalace.username << " has " << codepalace.subscribers << " subscribers " << endl;
    cout << code_with_kaifee.username << " has " << code_with_kaifee.subscribers << " subscribers ";
}
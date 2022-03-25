#include <iostream>
#include<string>
using namespace std;
void add(int, int);
void add(float, float);
void add(string ,string);
int main()
{
    add(2, 3);
    add(2.6f, 2.3f);
    add("Md","Kaifee");
    return 0;
}
void add(int x, int y)
{
    cout << "Sum is:" << x + y<<endl;
}
void add(float x, float y)
{
    cout << "Sum is:" << x + y<<endl;
}
void add(string x, string y)
{
    cout << "Sum is:" << x + y;
}
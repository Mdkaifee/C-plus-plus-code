#include <iostream>
using namespace std;
int main()
{
    string animals[][3] = {
        {"fox", "mouse", "cat"},
        {"Parrot", "Dog", "Lion"}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << animals[i][j]<<endl;
        }
    }
}
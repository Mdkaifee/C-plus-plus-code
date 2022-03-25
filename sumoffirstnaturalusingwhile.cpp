#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i;
    while(i<=10)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum will be:" << sum;
}
#include <iostream>
using namespace std;
int main()
{
    int number[10],i, n;
    
int smallest;
    cout << "Enter the value of n:";
    cin >> n;
    //cout << "Enter the numbers:";
    //cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element"<<(i+1)<<":";
        cin >> number[i];
    }

    smallest = number[0];
    for (i = 1; i < n; i++)
    {
        if (smallest > number[i])
            smallest = number[i];
    }
    cout << "smallest =" << smallest;
}
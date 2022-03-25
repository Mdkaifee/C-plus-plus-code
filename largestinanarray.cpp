#include <iostream>
using namespace std;
int main()
{
    int number[10],i, n;
    
int largest;
    cout << "Enter the value of n:";
    cin >> n;
    //cout << "Enter the numbers:";
    //cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Enter element"<<(i+1)<<":";
        cin >> number[i];
    }

    largest = number[0];
    for (i = 1; i < n; i++)
    {
        if (largest < number[i])
            largest = number[i];
    }
    cout << "largest =" << largest;
}
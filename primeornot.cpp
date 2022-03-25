#include <iostream>
using namespace std;
int main()
{
    int n, i,flag=0;
    cout << "Enter the number you want to check= ";
    cin >> n;
    flag = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non prime";
            flag = 1;
            break;
        }
    }

if (flag == 0){

    cout << "Prime";
}}
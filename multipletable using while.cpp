/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int i = 1;
    cout << "Enter the no.:";
    cin >> n;
    while (i <=10)
    {
        cout << n << "x" << i << "=" << n * i << endl;
        i++;
    }
}
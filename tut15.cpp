#include <iostream>
using namespace std;
//Function prototype
//type function-name(arguments);
//int sum(int a,int b);//-->Acceptable
//int sum(int a, b);//-->Not Acceptable
int sum(int,int);//-->Acceptable

int main()
{
    int num1, num2;
    cout<< "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    //num 1 and num2 are actual parameters
    cout << "The sum is:" << sum(num1, num2);//sum(num1, num2)=return c
    return 0;
}
int sum(int a, int b)
//Formal parameters a and b will be taking values from actual parameters num1 and num2.
{
    int c = a + b;
    return c;
}
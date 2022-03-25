#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the no u want to multiply:"<<endl;
    cin>> num;
    int i = 1;
    do
    {
        cout << num <<"x"<<i<<"="<<num*i<< endl;
        i++;
    } while (i <= 10);
    
}
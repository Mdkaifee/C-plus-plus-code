#include<iostream>
using namespace std;
void fun(int);
int main()
{
    int value=0;
    cout<<"Enter something:";
    cin>>(value);
    fun(value);
    return 0;
}
void fun(int x){
    cout<<x;

}
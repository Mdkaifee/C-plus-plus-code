#include <iostream>
using namespace std;
//function declaration
//return type(input);
void fun(void);
int main()
{
    //call function
    fun();
    fun();//no.of times u will call this fn,same no.of tym will print hello kaifee
    return 0;
}
//function body
void fun()
{
    cout << "Hello Kaifee";
}
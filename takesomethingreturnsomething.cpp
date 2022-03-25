#include<iostream>
using namespace std;
int fun(int);
int main()
{
    int value=0;
    cout<<"Enter something:";
    cin>>value;
  
    value=fun(value);
     cout<<"Value is:"<<value;
    return 0;
}
int fun(int x){
    x=x*x;
    return x;

}
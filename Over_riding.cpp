#include<iostream>
using namespace std;
class data{
    protected:
    int x,y;
    public:
    void read(){
    cout<<"Enter the value of x & y:";
    cin>>x>>y;
}
};
class exp:public data{
    int z;
public:
void read()
//data::read(); instaed of main u can use here a resolution opertaor
{
    cout<<"Value of z is:";
    cin>>z;
}
void sum()
{
    int sum=x+y+z;
    cout<<"Sum is:"<<sum;
}};
int main()
{
    exp obj;
    obj.read();
    obj.data::read();
    obj.sum();
}
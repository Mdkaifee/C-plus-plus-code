#include <iostream>
using namespace std;
class data{
protected:
int x,y;
public:
void read()
{
cout<<"Enter the value of x and y:";
cin>>x>>y;
}
void show()
{
    cout<<"Value of x is:"<<x<<endl;
     cout<<"Value of y is:"<<y<<endl;

}
};
class sum:public data{
    protected:
    int sum;
    public:
    void add(){

sum=x+y;
cout<<"Sum is:"<<sum<<endl;
    }
};
class average:public sum{
    public:
    void findavg()
    {
float avg=sum/2.0;
cout<<"Average is:"<<avg;
    }
};
int main(){
    average obj;
    obj.read();
    obj.show();
    obj.add();
    obj.findavg();
}
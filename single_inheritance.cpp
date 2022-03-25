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
    public:
    void add(){
int sum=0;
sum=x+y;
cout<<"Sum is:"<<sum;
    }
};
int main(){
    sum s;
    s.read();
    s.show();
    s.add();
}
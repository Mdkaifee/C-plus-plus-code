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
class subtraction:public data{
    public:
    void subtract()
    {
        int z=0;
        z=x-y;
        cout<<"Subtraction is:"<<z;
            }
};
int main(){
sum A;
A.read();
A.show();
A.add();
subtraction S;
S.read();
S.show();
S.subtract();
}

#include<iostream>
using namespace std;// in parametrize constructor there will be no automatic call will be done so call it explicitly
class base1{
    protected:
    int x;
    public:
    void readx()
    {
        cout<<"Enter the value of x";
        cin>>x;

    }

    base(int d)
    {
        x=d;
        cout<<"Base class constructor";
    }};
    class derv:public base1
    {
        protected:
        int y,z;
        public:
            derv(int a,int b,int c)//:base(c)
            {
                y=a;
                z=b;
                cout<<"Derive class constructor";
            }
        };
    int main()
    {
        derv obj(10,20,30);
        return 0;
    }
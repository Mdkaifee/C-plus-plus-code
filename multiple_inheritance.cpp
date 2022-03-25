#include<iostream>
using namespace std;
class base1{
    protected:
    int x;
    public:
    void readx(){
        cout<<"Enter the value of x:";
        cin>>x;

    }
    void showx();
};
class base2{
    protected:
    int y;
    public:
    void ready(){
        cout<<"Enter the value of y:";
        cin>>y;

    }};
    class derv:public base1,public base2{
        protected:
        int sum;
        public:
        void add()
        {
            sum=x+y;
              cout<<"sum="<<sum;
        }
    };
    int main(){
        derv obj;
        obj.readx();
        obj.ready();
        obj.add();
    }
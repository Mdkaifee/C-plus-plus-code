#include<iostream>
using namespace std;
class base{
        protected:
        int d;
        public:
        void enterdata()
        {
            cout<<"Enter the value of d:";
            cin>>d;
        }
    };
class base1:public virtual base{
    protected:
    int x;
    public:
    void readx(){
        cout<<"Enter the value of x:";
        cin>>x;

    }
    //void showx();
};
class base2:public virtual base{
    protected:
    int y;
    public:
    void ready(){
        cout<<"Enter the value of y:";
        cin>>y;

    }};
    /*class base{
        protected:
        int d;                                      it is not going to declare after base class
        public:
        void enterdata()
        {
            cout<<"Enter the value of d";
            cin>>d;
        }
    };*/
    class derv:public base1,public base2{
        protected:
        int sum;
        public:
        void add()
        {
            sum=x+y+d;
            cout<<"sum="<<sum;
        }
    };
    int main(){
        derv obj;
        obj.enterdata();
        obj.readx();
        obj.ready();
        //obj.base1::readx();
        //obj.base2::ready();
        obj.add();
    }
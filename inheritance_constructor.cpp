#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    void readx(){
        cout<<"Enter the value of x";
        cin>>x;

    }
    //void showx();
    base()
    {
        cout<<"Base class constructor";
    }};
    class derv:public base
    {
        protected:
        int d;
        public:
        void enterdata(){
            cout<<"Ënter the value of d";
            cin>>d;}
            //void display() //constructor
            derv()
            {
                cout<<"Derive class constructor";
            }
        };
    int main()
    {
        derv obj;
        //obj.readx();
        //obj.enterdata();
    }
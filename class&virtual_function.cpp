#include <iostream>
using namespace std;
class base{
    int x,y;
    public:
   virtual void display  ()   // u have to use single virtual fn or more than one
    {
        cout<<"Base class function";

    }
}
class derv1:public base{//Heirarchy inheritance
    int z;
    public:
    void display();
    {
        cout<<"Derv 1 class function";
    }
};
class derv2:public base{
    int m;
    public:
    void show(){
        cout<<"Derv 2 class function";
    }
};
void main()
{
    base b;
    base *ptr;
    ptr=&b;
    ptr->display();
    derv d1;
    ptr=&d1;
    ptr->display();
}
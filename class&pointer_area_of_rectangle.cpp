#include<iostream>
using namespace std;
class rectangle{
    float l,b;
    public:
    void read()
    {
        cout<<"Enter length and breadth:";
        cin>>l>>b;

    }
    void area()
    {
        float ar;
        ar=l*b;
        cout<<"Area is:"<<ar;

    }
};
void main(){
    rectangle obj;//As u create object space is allocated
    rectangle *p;
    p=&obj;     //We create object using pointer
    p->read();//obj.read();
    p->area();//obj.area();
}
/* if we r not using object
 void main()
 {
     rectangle *ptr;
     ptr=new rectangle;          //Dynamic memory allocation
     ptr->read();
     ptr->area();
 }
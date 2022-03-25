#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void setdata(int r,int i)
    {
        real=r;
        imag=i;
    }

void show(){
cout<<real<<"+i"<<imag;
    cin>>real>>imag;
}
void increment()  // No passing of argument while using unary operator
{
    real++;
    imag++;
}
void main()
{
    complex c1,c2;
    c1.setdata(5,8);
    c2.setdata(10,20);
    c1.show();
    c1.increment();   // or ++c1 or ++c2 u can write

}};
/* For c2=++c1   You have to jst make a temp object
complex operator++(){
    complex temp;
    temp real=real+1;
    temp imag=imag+1;
    return (temp);
}
void main(){
    complex c1,c2;
    c1.setdata(5,8);
    c1.show();
    c2=++c1;
    }*/
    /* For c2.show();    =(5,8)
    c1.show();          =(6,9)
    complex operator++(){
        complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return (temp);
    }*/
    /*for c2=c1++;
complex operator++(int){
temp.real=real;
temp.imag=imag;
++real;
++imag;
}*/
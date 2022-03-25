#include<iostream>
using namespace std;
class complex{
    int real,imag;
    public:
    void read(){
        cout<<"Enter imag part and real part:";
        cin>>real>>imag;
    }
    void show(){
        cout<<real<<"+"<<imag;
    }
    complex sum(complex obj1,complex obj2);
    };
    int main(){
        complex c1,c2,c3;
        cout<<"Enter the first complex no.:";
        c1.read();
        cout<<"Enter the 2nd complex no.:";
        c2.read();
        c3.sum(c1,c2);
        void sum(complex obj1,complex obj2){
            real=obj1.real+obj2.real;
            imag=obj1.imag+obj2.imag;
            //c3=c1+c2;
            cout<<"Sum="<<sum;
            c3.show();
        }
    
    }

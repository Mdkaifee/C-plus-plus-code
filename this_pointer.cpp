#include<iostream>
using namespace std;
class rectangle{
    float l,b;
    public:                    //   u can write here 
    setdata(int r,int i){       //   (int l,int b)
        l=r;                    //     this->l=l;
        b=i;                     //  this->b=b;
        cout<<"Address of the pointer"<<this;
    }void area()
        {
            cout<<"Area="<<l*b;
        } 
    };
    int main(){
        rectangle s1,s2;
        s1.setdata(5,4);

    }

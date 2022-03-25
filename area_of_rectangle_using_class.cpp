#include<iostream>
using namespace std;
class rectangle{
    public:
float length;
float breadth;
float area;
void getdata(){
cout<<"Enter length:"<<endl;
cin>>length;
cout<<"Enter breadth"<<endl;
cin>>breadth;
 area=length*breadth;
    cout<<"Area="<<area;  
}
};
int main(){
rectangle r;
r.getdata();

}
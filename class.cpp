#include<iostream>
using namespace std;
class Employee{
    public:
string name;
string company;
int age;
void myIntro(){
    cout<<"Name-->"<<name<<endl;
    cout<<"Company-->"<<company<<endl;
    cout<<"Age-->"<<age<<endl;

}

};
int main(){
Employee e1;
e1.name="Kaifee";
e1.company="Google";
e1.age=20;
e1.myIntro();
}
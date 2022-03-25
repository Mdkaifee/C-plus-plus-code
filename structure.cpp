#include<iostream>
#include<string>
using namespace std;
struct person   //definition of structure
{
string name;
int age;
float weight;
float height;
double salary;
};
int main()
{
person pVar;
pVar.name="Kaifee";
pVar.age=34;
pVar.height=5.6f;
pVar.weight=48.5f;
pVar.salary=80000;

//access Data
pVar.salary=90000;
//print data of user defined datatype
cout<<endl<<"salary:"<<pVar.salary;
cout<<endl<<"age:"<<pVar.age;
cout<<endl<<"height:"<<pVar.height;
cout<<endl<<"weight:"<<pVar.weight;
cout<<endl<<"name:"<<pVar.name;


}
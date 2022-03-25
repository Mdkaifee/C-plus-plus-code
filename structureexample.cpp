#include <iostream>
#include <string>
using namespace std;
struct camera
{
    int front;
    int rear;
};
struct phone //definition of structure
{
    string name;
    int RAM;
    int ROM;
    string processor;
    double price;
    camera camera;
};
int main()
{
    phone pVar;
    pVar.name = "One plus";
    pVar.RAM = 4;
    pVar.ROM = 32;
    pVar.processor = "snapdragon";
    pVar.camera.front = 13;
    pVar.camera.rear = 16;
    pVar.price = 40000;

    //print data of user defined datatype
    cout << endl
         << "name:" << pVar.name;
    cout << endl
         << "RAM:" << pVar.RAM;
    cout << endl
         << "ROM:" << pVar.ROM;
    cout << endl
         << "camera front:" << pVar.camera.front;
    cout << endl
         << "camera rear:" << pVar.camera.rear;
    cout << endl
         << "price:" << pVar.price;
}
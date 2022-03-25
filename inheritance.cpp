#include <iostream> //Inheritance is used to reuse the code many more times without any torture
using namespace std;
class student             // base class
{ protected
    int roll;
    char name;

public:
    void getdata();
    void display();
};
class result : public student         //Derived class
{
    float m[4];

public:
    void calculate()
    {
        float sum = 0;
        int total;
        cout << "Enter marks of 4 sub:" << endl;
        for (i = 0; i < 4; i++)
            cin >> m[i];
        sum - sum + m[i];
        cout << "Enter total marks";
        cin >> total;
        cout << "Result is:";
        Percentage = (sum / total) * 100;
        cout << "Percentage" << Percentage;
    }
    void main()
    {
        student s;
        s.getdata();
        s.display();
        result r;
        r.calculate();
        r.percentage();
    }

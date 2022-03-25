#include <iostream> //used for different datatypes
using namespace std;
class
{
    int a, b, e;

public:
    void display();
};
int main()
{
    int a = 10;
    float b = 20.4;
    char e = 'M';
    display(a, b);
    // display(b,c);
    // display(c,a);
    display(a); 
    // display(c);
    template <class T1, class T2>
    display(T1 x, T2 y)
    {
        cout << "First value=" << x;
        cout << "Second value=" << y;
    }
    template <class T>
    display(T x)
    {
        cout << "Result=" << x;
    }
}
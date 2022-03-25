#include <iostream>
using namespace std;

// class
class house
{
private:
    // member variables
    int length = 0, breadth = 0;

public:
    // member functions
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void area()
    {
        cout << "Area of house " << length * breadth<<endl;
    }
};

int main()
{
    house gini, Kaifee;

    gini.setData(300, 500);

    gini.area();
    Kaifee.setData(200, 300);
    Kaifee.area();
    return 0;
}
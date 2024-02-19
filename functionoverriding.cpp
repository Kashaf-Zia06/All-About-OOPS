#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "This is base class\n";
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "This is derived class\n";
    }
};

int main()
{
    B aa;
    aa.display();
    // This is derived class will be printed on screen because derived class will look into itslef first for that function and then it will be executed from class B
    // This is called fuynction overriding means the other function with same name a ppears to have no existence.
    aa.A::display(); // If you want to use base class function with the object of derived class then this is the method

    return 0;
}
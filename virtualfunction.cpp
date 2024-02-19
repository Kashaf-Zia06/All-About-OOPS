#include <iostream>
using namespace std;

//***Virtual function is used to use function of same name in diffrent class by assigining address of objects associated with diffrent classes to pointers
class A
{
public:
//virtual void show()=0; This is pure virtual function. Its code will  be compiled by compiler itself 
    virtual void show()
    {
        cout << "\nthis is base class\n";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "This is derived class\n";
    }
};


// This is also called Runtime polymorphism 
int main()
{
    A *ptr;
    B bb;
    A aa;
    ptr=&aa;
    ptr->show(); //"this is base class" will be output
    ptr = &bb;
    ptr->show(); //"this is derived class " will  be output
    return 0;
}
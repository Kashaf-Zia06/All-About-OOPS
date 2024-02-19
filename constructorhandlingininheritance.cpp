#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    A(int a)
    {
        x = a;
    }
};

class B
{
protected:
    int y;

public:
    B(int b)
    {
        y = b;
    }
};

class C : public A, public B
{
    int c;

public:
    C(int r, int q, int p) : A(r), B(q) // We need to tell compiler which parameter will pass value to which variable in which class
    {
        c = p;
    }
    void sum()
    {
        cout << "The sum of numbers is\t" << x + y + c;
    }
};

int main()
{
    C aa(10, 10, 10);
    aa.sum();

    return 0;
}
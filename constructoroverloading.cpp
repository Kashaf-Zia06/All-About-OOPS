#include<iostream>
using namespace std;
//CONSTRUCTOR OVERLOADING refers to use of multiple constructor in same program and compliler identifies every constructor with umber and type of argumnets'
class demo
{
    private:
    int a;
    public:
    demo() //defaukt constructor
    {
        a=10;

    }
    demo (int x) //parametric constructor
    {
        a=x;
    }
    demo(demo &z)  //copy constructor
    {
        a=z.a;
    }
    void putdata()
    {
        cout<<"Value of a is \t"<<a<<endl;
    }
};

int main()
{
    demo d;
    demo bb(5); 
    demo aa(d);
    d.putdata();
    aa.putdata();
    bb.putdata();
return 0;
}
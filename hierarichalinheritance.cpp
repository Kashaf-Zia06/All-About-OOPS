#include<iostream>
using namespace std;

class A        //A is root class which is inheirted by others
 {
    public:
    void display()
    {
        cout<<"Welcome to inheritance\n It is class A\n";
    }
};

class B: public A{
    public:
    void msg()
    {
        cout<<"Inside class b\n";
    }

};

class C: public A
{
    public:
    void ccc()
    {
    cout<<"Inside class C\n";
    }
};

int main()
{
    B bb;  //differnet objects is created for diefferent class
    bb.display();
    bb.msg();
    C cc;
    cc.ccc();
    cc.display();
    
return 0;
}
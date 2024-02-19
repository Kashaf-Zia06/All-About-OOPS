#include<iostream>
using namespace std;

class demo
{
    int a,b;
    static int x;
    public:
    void getdata();
    void putdata();
    static void display();
};
int demo:: x;

void demo:: getdata()
{
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    x=x+1;
}
void demo:: putdata()
{
    cout<<"\nValue of a is\t"<<a<<"\tValue of b is\t"<<b<<endl;
}

void demo :: display()
{
    cout<<"\nValue of static x through static function is \n"<<x<<endl;
}
int main()
{
    demo d;
    d.getdata();
    d.putdata();
    demo :: display(); //since static member function is called using class name
    return 0;
    
}
#include<iostream>
using namespace std;

//static member is used when we want common value to be held by different objects of the same class
class demo
{

    static int x;
    int z,y;
    public:
    void getdata(int, int);
    void putdata();
};
int demo :: x; //static member is defined outside the class because it is shared by all the objects of the class so it is neccessary to define it outside the class
void demo :: getdata(int a ,int b)
{
    z=a;
    y=b;
    x=x+1;   //by default x is 0 so 1 is added here at this step
}
void demo :: putdata()
{
    cout<<"Value of a is\t"<<z<<"\tValue of b is\t"<<y<<"\tValue of x is\t"<<x<<"\n";
}
int main()
{
 demo d,dd;
 d.getdata(20,30);   
 dd.getdata(2,5);
 d.putdata();
 dd.putdata();
 return 0;
}
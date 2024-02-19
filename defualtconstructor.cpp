#include<iostream>
using namespace std;

//Constructor is special member function of the class which is used to initialize the variables of the class
//Default constructor is the constructor which does not take any argument 

class demo
{
    int a,b;
    public:
        demo() //default constructor
    {
        a=5;
        b=2; //we cannot assign values to a and b through objects like d.a=5 and d.b=2 because a and b are private members of the class therfore constructors are used to assign values to the private members of the class
    }
    void putdata()
    {
        cout<<"Value of a is\t"<<a<<"\tValue of b is\t"<<b<<endl;
    }
};
int main()
{
    demo d;
    d.putdata();
    
return 0;
}
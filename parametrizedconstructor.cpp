#include<iostream>
using namespace std;

class demo
{
    int a,b;
    public:
     demo(int x,int y)     //parametrized constructor
     {
        a=x;
        b=y;
     }
     void putdata()
     {
            cout<<"Value of a is\t"<<a<<"\tValue of b is\t"<<b<<endl;
     }
};

int main()
{
    //one method of passing values to parametrized constructor
    demo d(5,2); //it is necessary to pass arguments immediately with object creation because it is a parametrized constructor otherwise it will give error
    d.putdata();
    //taking values from user
    /*int x,y;
    cout<<"\nEnter two numbers\n";
    cin>>x>>y;
    demo d(x,y);
    d.putdata();*/
    
return 0;
}
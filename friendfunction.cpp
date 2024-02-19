#include<iostream>
using namespace std;

//Friend function is type of function used to access the private members of the class without being declared as public function of that class

class demo
{
    int a,b;
    public:
    void getdata();
    friend int sum(demo); //friend function

};

void demo :: getdata()
{
    cout<<"Enter two numbers\n";
    cin>>a>>b;
}

int sum(demo d)
{
    return d.a+d.b;
}

//Uisng friend function to find maximum number between two fifferent classes

class B;
class A
{
    int a;
    public:
    void getdata();
    friend int max(A,B);
};
class B
{
    int b;
    public:
    void getdata();
    friend int max(A,B);
};

void A :: getdata()
{
    cout<<"Enter a number\n";
    cin>>a;

}
void B :: getdata()
{
    cout<<"Enter another number\n";
    cin>>b;
}
int max(A aa,B bb)
{
    if(aa.a>bb.b)
     cout<<"A is greater\n";
    
    else
        cout<<"B is greater\n";
}


int main()
{
    demo d;
    d.getdata();
    cout<<"Sum of numbers is "<<sum(d); //object of class is passed as argument to friend function
    cout<<endl;
    A aa;
    B bb;
    aa.getdata();
    bb.getdata();
    max(aa,bb);
return 0;
}

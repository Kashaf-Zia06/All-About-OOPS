#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void input()  //Here the function name is same in both classes that results in ambiguity
    {
        cout<<"Enter value for a\n";
        cin>>a;
    }
    void output()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};

class B{
    protected:
    int  b;
    public:
    void input() //Here the function name is same in both classes that results in ambiguity
    {
        cout<<"Enter value for b\n";
        cin>>b;
    }
    void putdata()
    {
        cout<<"The value of b is "<<b<<endl;
    }

};

class C: public A,public B{
    private:
    int c;
    public:
    void input()  //Here the function name is same in both classes that results in ambiguity
    {
        cout<<"Enter value for c\n";
        cin>>c;
    }

    void sum()
    {
        cout<<"The sum of three numbers is "<<a+b+c<<endl;
    }
};


int main()
{
  C aa;
  aa.A::input(); //calling functions of same name in different classes through object of derived class
  aa.B::input();
  aa.input();
  aa.sum();  
return 0;
}
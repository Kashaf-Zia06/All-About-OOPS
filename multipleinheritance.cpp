#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    public:
    void getdata()
    {
        cout<<"Enter any number\n";
        cin>>a;
    }
};

class B
{
    protected:
    int b;
    public:
    void input()
    {
        cout<<"Enter any number\n";
        cin>>b;
    }
};

class C:public A ,public B{   //Inheriting more than one base class in one derived class i.e multiple inheritance
    private:
    int sum=0;
    public:
    void output()
    {
        sum=a+b;
        cout<<"Sum of variables stored in differnet classes is\t"<<sum<<endl;
    }
};
int main()
{
  C cc;
  cc.getdata();
  cc.input();
  cc.output();
return 0;
}
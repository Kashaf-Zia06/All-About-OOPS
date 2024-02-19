#include<iostream>
using namespace std;

//Inheritance is the process of deriving one class into another class
//***********SINGLE INHERITANCE**********// 
class A  //base class
{
    protected:  //private cannot be inherted therefore protected is used in the class which has to be inherited
    int x;
    public:
    void getdata()
    {
        cout<<"Enter any number\n";
        cin>>x;
    }
};
//derived class
class B:public A{ //publicly accessing class
    private:
    int y;
    public:
    void input()
    {
        cout<<"Enter any number\n";
        cin>>y;

    }
    void putdata()
    {
        cout<<"The sum of number is "<<x+y<<endl;
    }
};
int main()
{
    B bb; //object is always created for derived class
    bb.getdata();
    bb.input();
    bb.putdata();
    return 0;
}
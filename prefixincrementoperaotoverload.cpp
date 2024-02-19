#include<iostream>
using namespace std;

class demo
{
    int x;
    public:
    void getdata()
    {
        cout<<"Enter any number\n";
        cin>>x;
    }
    void putdata()
    {
        cout<<"Original value of x is "<<x<<endl;
    }
    void operator++()  //No return type in increment a=a+1
    {
        x=x+1; //by default jis object k refernece se call horha usi class k andar avriable me incremen hota
    }
    void operator++(int)   //postfix a++ i.e equal to a=a+1 so a parameter integer is given considering +1
    {
        x=x+1;
    }
};

int main()
{
    demo aa;
    aa.getdata();
    aa.putdata();
    ++aa;
    aa.putdata();
    aa++;
    aa.putdata();
return 0;
}
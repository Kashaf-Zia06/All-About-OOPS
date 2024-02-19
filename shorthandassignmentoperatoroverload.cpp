#include<iostream>
using namespace std;

class demo
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter value\n";
        cin>>a;
    }
    void putdata()
    {
        cout<<"Value of a is "<<a<<endl;
    }
    void operator+=(demo bb)
    {
        a=a+bb.a;
    }


};

int main()
{
    demo aa,bb;
    aa.getdata();
    aa.putdata();
    bb.getdata();
    bb.putdata();
    aa+=bb;
    aa.putdata();

    
return 0;
}
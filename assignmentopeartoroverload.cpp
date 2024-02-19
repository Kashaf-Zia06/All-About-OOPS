#include<iostream>
using namespace std;

class demo
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter value for x and y\n";
        cin>>x>>y;
    }
    void putdata()
    {
        cout<<"Value of x and y is "<<x << y<<endl;
    }
    void operator=(demo bb)
    {
        x=bb.x;
        y=bb.y;
    }
};

int main()
{
    demo aa,bb;
    bb.getdata();
    aa=bb;
    aa.putdata();
    bb.putdata();
    
return 0;
}
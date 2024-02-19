#include<iostream>
using namespace std;
//****OPERATOR OVERLOADING****
//Process of assigning another task to built in operator is called as operator overloading.
class demo
{
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"Enter a number\n";
        cin>>a;
    }
    void putdata()
    {
        cout<<"Value of a is "<<a<<endl;
        
    }
    //return will also be an obj of demo class(demo) operator(keyword)here its afunction from whose reference it is called (+ for addition) and (demo bb)as an argument to a function 
    demo operator+(demo bb) //Syntax for cc=aa+bb;
    {
        demo cc;
        cc.a=a+bb.a;
        return cc;
    }

};

int main()
{
    demo aa,bb,cc;
    aa.getdata();
    aa.putdata();
    bb.getdata();
    bb.putdata();
    cc=aa+bb;
    cc.putdata();
    
return 0;
}
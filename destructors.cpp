#include<iostream>
using namespace std;

//****Destructor is used to destroy object as it goes out of its scope****//
int count=0;
class demo
{
    public:
    demo()
    {
        count++;
        cout<<"Value of object created \n"<<count;
    }
    ~demo() //destructor is also of same name as class but preceded by tiled(~) sign
    {
        count--;
        cout<<"The value of objects deleted\n"<<count;
    }
    
};
int main()
{
    demo aa,bb,cc; // after dd, cc will destroy, then bb then aa 
    {
        demo dd;// first this object will be destroyed as its scope is finished before others.Baces are put intentionally
    }// as soon as scope is finished count will deceremnt means destructor is called after encountering this brace
    
return 0;
}
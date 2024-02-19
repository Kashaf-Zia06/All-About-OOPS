#include<iostream>
using namespace std;

class number{
    private:
    int a,b;
    public:
    void getdata();
    void putdata();
};

void number :: getdata()
{
    cout<<"\nEnter two numbers for addition\n";
    cin>>a>>b;
}
void number :: putdata()
{
    cout<<"Sum of numbers is "<<a+b<<endl;
}
int main()
{
    number aa[5];
    int i;
    for(i=0;i<5;i++)
    {
        aa[i].getdata();
    }
    for(i=0;i<5;i++)
    {
        aa[i].putdata();
    }

return 0;
}
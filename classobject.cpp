#include<iostream>

using namespace std;

class addition
{
    private:
        int a,b;
    public:
        void getdata();
        void putdata();
};
//return_type name_of_class scope_resolution_operator:: name_of_function
void addition :: getdata()
{
    cout<<"Enter two numbers for addtion"<<endl;
    cin>>a>>b;
}
//return_type name_of_class scope_resolution_operator:: name_of_function
void addition :: putdata()
{
    cout<<"Sum of numbers is "<<a+b<<endl;
}

//Program to check odd even with class
class odd_even{
    private:
        int a;
    public:
        void getdata();
        void putdata();
};

void odd_even :: getdata()
{
    cout<<"Enter number to check"<<endl;
    cin>>a;
}
void odd_even :: putdata()
{
    if(a%2==0)
        cout<<a<<" Number is even"<<endl;
    else    
        cout<<a<<" number is odd"<<endl;
}

int main()
{
    addition aa; //object of class addition
    aa.getdata();
    aa.putdata();
    odd_even oe;
    oe.getdata();
    oe.putdata();
    return 0;
}
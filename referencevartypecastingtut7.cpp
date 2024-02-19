#include<iostream>

using namespace std;
int c=42;
int main()
{
    //*****LITERALS IN C++******
    int a=30;
    float b=30.2;
    double c=50.56;
    cout<<"Size of "<<sizeof(30)<<endl;
    cout<<"Size of "<<sizeof(30.2f)<<endl;
    cout<<"Size of "<<sizeof(30.2F)<<endl;
    cout<<"Size of "<<sizeof(30.2l)<<endl;
    cout<<"Size of "<<sizeof(30.2L)<<endl;

    //Printing global variable outisde scope
    cout<<::c<<endl;

    //Typecasting in c++ 2 syntaxes
    int x=45;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of x is "<<float(x)<<endl;
    cout<<"The value of x is "<<(float)x<<endl;

    //REFERENCE VARIABLES
    int d=63;
    int &e=d;
    cout<<"Value of d directly "<<d<<endl;
    cout<<"Value of d using reference "<<e<<endl;
    return 0;
}

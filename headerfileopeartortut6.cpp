#include<iostream>
//user difned header file
#include "this.h"
using namespace std;
int main()
{
    int a=10,b=20;
    //relational and logical operators in c++
    cout<<"Value of a>b is " <<(a>b) <<endl;
    cout<<"Value of a<b is " <<(a<b) <<endl;
    cout<<"Value of a==b is "<<(a==b)<<endl;
    cout<<"Value of a!=b is "<<(a!=b)<<endl;
    cout<<"Value of a%b is "<<(a%b)<<endl;
    cout<<"using and operator is "<<((a!=b)&&(a==b))<<endl;
    cout<<"using or operator "<<((a<=b)||(a>=b))<<endl;

}
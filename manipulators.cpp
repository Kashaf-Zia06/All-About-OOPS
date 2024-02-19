#include<iostream>
#include<iomanip>
//for using manipualtors like endl and setw we include iomanip

using namespace std;
int main()
{
    int a=3;
    int b=12;
    int c=845;
    int d=1234;
 
    //setw for setting width of output
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;                                          
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
  
    return 0;

}  
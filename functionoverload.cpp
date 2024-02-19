#include<iostream>
using namespace std;
 int sum(int a,int b);
 int sum(int,int ,int);
//Function overloading same names of functions can be adjusted with number of arguments
int main()
{
   cout<< sum(5,6);
   cout<<endl;
   cout<<sum(4,4,4);
return 0;
}

int sum(int a,int b)
{

    return a+b;
    
}
int sum(int a,int b,int c)
{
    return a+b+c;
}
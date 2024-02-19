#include<iostream>
using namespace std;
int main()
{
    int a=7;
    int *i;
    i=&a;
    int **p;
    p=&i;
    cout<<p<<endl;
    cout<<i<<endl;
return 0;
}
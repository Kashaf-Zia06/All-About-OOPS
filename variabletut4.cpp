#include<iostream>

using namespace std;
int global=10;
void print(void)
{
    cout<<global;
}
int main()
{
int global=5;
int a=14;
float b=11.5;
char c='k';
bool d=true;
cout<<"The value of a is "<<a<<".\n";
cout<<"The value of b is"<<b<<".";
cout<<"\nvalue of c is "<<c<<".";
cout<<"\nvalue of d is "<<d<<".";
//Although the global variable is declared outside the main function, the local variable is given priority over the global variable so value of global decalred in main will be printed.
cout<<"\nPrinting local variable global "<<global;
cout<<"\nPrinting value of global through global variable via function "; 
cout<<"\nPrinting value of global through global variable via function "; 
print();
return 0; 
}
#include<iostream>
using namespace std;
//Exceptions are reffered to run time errors
int main()
{
    int a,b;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    int c;
    //In try block we put those lines of coes in which exceptions are possible
    try{
        if(b!=0)
        {
            c=a/b;
            cout<<"Ans is "<<c<<endl;
        }
        else
        {
            throw(b);
        }
    }
    //Catch block must be immediately below try block to handle exceptions produced and avoid abrupt termination of programs
     catch(int b){
        cout<<"Divison is not possible by 0\n";

    }

    
return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter value for x\n";
    cin>>x;
    try{
        if(x>10&&x<=20)
            throw(x);
        if(x>=100&&x<=120)
            throw('x');
        if(x>=500&&x<=550)
            throw(5.5F); //for making float put f or F 

    }
    catch(int x){
        cout<<"The value of x is >10 and <=20";

    }
    catch(char x)
    {
        cout<<"VALUE OF X is >=100 and <=120";
    }
    catch(float x)
    {
        cout<<"float value\n";
    }
    //Handling multiple exceptions from single catch
    catch(...)//Jitny try me exceptions utny dot
    {
        cout<<"Wrong input\n";
    }
    
return 0;
}
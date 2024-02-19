#include<iostream>
using namespace std;
class TIME 
{
    int h,m;
    public:
    void getdata();
    void putdata();
    void sum(TIME,TIME); //objects as function arguments
};
void TIME ::getdata()
{
    cout<<"Enter hours and minutes\n";
    cin>>h>>m;
    
}

void TIME :: putdata()
{
    cout<<"Time in hours "<<h<<" and minutes "<<m <<endl;
    
}


void TIME:: sum(TIME t1,TIME t2)
{
    h=(t1.m+t2.m)/60;
    m=(t1.m+t2.m)%60;
    h=h+(t1.h+t2.h);
}
int main()
{
    TIME t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2); //objects as function argumets
    t3.putdata();
    
return 0;
}
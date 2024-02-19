#include<iostream>
using namespace std;

//****COPY CONSTRUCTOR****
/* Its is used to copy the data fromm one object into another of same class*/

    class demo
    {
        int a;
        public:
        demo()
        {
            a=10;
        }
        demo(demo &d) //copy
        {
            a=d.a;
        }
        void putdata()
        {
            cout<<"Value of a is\t"<<a<<endl;
        }
    };

 int main()
 {
    demo d;
    demo d1(d); //copy constructor is called
    demo d2=d1; //copy constructor is called   
    d.putdata();
    d1.putdata();
    d2.putdata();
return 0;
 }

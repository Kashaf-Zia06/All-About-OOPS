#include<iostream>
using namespace std;

class A //base class
{
    protected:
    int roll_;
    public:
    void roll()
    {
        cout<<"Enter your roll no\n";
        cin>>roll_;
        cout<<"Your roll no is\t"<<roll_<<endl;
    }
    
};

class B: public A{  //child class of A
    protected:
    int marks1,marks2;
    public:
    void marks()
    {
        cout<<"Enter marks for two subjects\n";
        cin>>marks1>>marks2;
        cout<<"Marks for two subjects\n";
        cout<<marks1<<endl<<marks2<<endl;
    }
    
};

class C: public B //child class of B
{
    private:
    int tot;
    public:
    void putdata()
    {
        cout<<"The roll no of student is\t"<<roll_<<endl;
        //cout<<"The roll no of student via function is\t"<<roll()<<endl;
        cout<<"The marks for subjects is\t"<<marks1<<"\t"<<marks2<<endl;
    }
    void total()
    {
        tot=marks1+marks2;
        cout<<"Total marks is \t"<<tot<<endl;
    }

};
int main()
{
  C cc;
  cc.roll();
  cc.marks();
  cc.putdata();
  cc.total();  
  return 0;
}
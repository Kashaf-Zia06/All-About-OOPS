#include<iostream>
using namespace std;

class reverse{
    private:
        int n;
    public:
        void getdata();
        void putdata();
};

void reverse ::getdata()
{
    cout<<"Enter number for reverse\n";
    cin>>n;
}

void reverse::putdata()
{
    while(n>0)
    {
    int rem=0;
    rem=n%10;
    cout<<rem;
    n=n/10;
    }

}
int main()
{
    reverse r;
    r.getdata();
    r.putdata();
    return 0;
}
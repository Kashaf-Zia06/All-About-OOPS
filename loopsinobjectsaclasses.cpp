#include<iostream>
using namespace std;

class onetoten{
    public:
        void putdata();
};

void onetoten :: putdata()
{
    for(int i=1;i<=10;i++)
    {
        cout<<i<<endl;
    }

}
int main()
{
    onetoten aa;
    aa.putdata();
    
    return 0;
}
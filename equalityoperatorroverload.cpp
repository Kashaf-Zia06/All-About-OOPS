#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void getdata()
    {
        cout << "Enter a value\n";
        cin >> a;
    }
    void putdata()
    {
        cout << "Value of a is " << a << endl;
    }


bool operator==(A bb)
{
    if (a == bb.a)
        return true;
    else
        return false;
}
};
int main()
{
    A aa, bb;
    aa.getdata();
    aa.putdata();
    bb.getdata();
    bb.putdata();
    if (aa == bb)
    {
        cout << "Values are equal\n";
    }
    else
        cout << "Values are different\n";

    return 0;

}
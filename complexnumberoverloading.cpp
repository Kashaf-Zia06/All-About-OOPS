#include <iostream>
using namespace std;

class complex
{
    int r, i;

public:
    void getdata()
    {
        cout << "Enter value for real and imaginary\n";
        cin >> r >> i;
    }
    void putdata()
    {
        cout << "Value of real number is " << r << endl;
        cout << "Value of imaginary number is " << i << endl;
    }
    complex operator+(complex bb)
    {
        complex cc;
        cc.r = r + bb.r; //Real me real add
        cc.i = i + bb.i;  //imaginary me imaginary add
        return cc;
    }
};

int main()
{
    complex aa, bb, cc;
    aa.getdata();
    aa.putdata();
    bb.getdata();
    bb.putdata();
    cc = aa + bb;
    cc.putdata();
    return 0;
}
#include <iostream>
using namespace std;
class mca
{
private:
    int length;
    int breadth;

public:
    mca(int length, int breadth)
    {
        length = len;
        breadth = br;
    }
    friend int pro(mca mca);
    int pro(mca mca)
    {
        int ar = len * br;
        cout << ar;
    }
};
int main()
{
    mca m1;
    m1.mca(20, 30);
    pro(m1);

    return 0;
}
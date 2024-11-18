// Operator Overloading

#include <iostream>
using namespace std;

class fun
{
public:
    int add;
    fun(int a)
    {
        add = a;
    }
    fun operator+(fun t2)
    {
        fun t3(0);
        t3.add = add + t2.add;
        return t3;
    }

    void display()
    {
        cout << add << endl;
    }
};

int main()
{
    fun t1(10), t2(20), ans(0);
    ans = t1 + t2;

    ans.display();
}
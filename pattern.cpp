#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
         n--;

        cout << endl;
    }
    return 0;
}




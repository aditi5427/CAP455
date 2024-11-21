#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a = {9, 2, 6, 4, 5};
    sort(a.begin(), a.end());
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "a: " << a << "b: " <<   endl;
    if (b < a)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << b - a + 1 << endl;
    }
    return 0;
}
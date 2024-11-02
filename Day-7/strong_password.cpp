#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string text;
        cin >> text;
        long long int idx = -1;
        for (int i = 0; i < text.size() - 1; i++)
        {
            cout << text[i];
            if (text[i] == text[i + 1] && idx == -1)
            {
                idx = i;
                if (text[i] == 'a')
                    cout << "b";
                else
                    cout << 'b';
            }
        }
        cout << text[text.size() - 1];
        if (idx == -1)
        {
            if (text[text.size() - 1] == 'a')
                cout << "b";
            else
                cout << 'a';
        }
        cout << "\n";
    }
    return 0;
}
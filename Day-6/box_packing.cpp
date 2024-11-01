#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> value;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        value.push_back(x);
    }
    sort(value.begin(), value.end());

    int mx = 0;
    map<int, int> mp;
    for (auto i : value)
    {
        mp[i]++;
        mx = max(mx, mp[i]);
    }

    cout << mx << endl;
    return 0;
}
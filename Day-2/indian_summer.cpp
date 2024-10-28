#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<string,string>, bool > mp;
    for (int i = 0; i < n; i++)
    {
         string str,str2;
         cin >> str >> str2;
         mp[{str,str2}]=true;
    }
    cout << mp.size() << endl;
    
    return 0;
}
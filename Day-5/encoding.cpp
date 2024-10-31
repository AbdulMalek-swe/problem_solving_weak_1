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
      string str1;
      int a;
      cin >> a >> str1;
       int f = str1.size();
      string str;
      str = str1;
      map<char, char> mp;
      mp.clear();
      sort(str.begin(), str.end());
      auto strUnique = unique(str.begin(), str.end());
      str.erase(strUnique, str.end());
      int sz = str.size() % 2 == 0 ? str.size() / 2 : str.size() / 2 + 1;
      for (int i = 0; i < sz; i++)
      {
         mp[str[i]] = str[str.size() - 1 - i];
         mp[str[str.size() - 1 - i]] = str[i];
      }
       
        for(int j = 0; j < f; j++){
            cout<<mp[str1[j]];   
        }
        cout<<endl;
      
   }

   return 0;
}
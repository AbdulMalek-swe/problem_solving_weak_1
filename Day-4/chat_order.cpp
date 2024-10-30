#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
     cin >> n;
     
     map<string , int>mp;
     vector<string>st;
    for (int i = 0; i < n; i++)
    {
         string str;
         cin >> str;
        //  mp[str]++;
         st.push_back(str);
    }
     reverse(st.begin(), st.end());
     for(auto value:st){
         
          if(!mp[value]){
            cout<<value<<endl;
            mp[value]++;
          }
          
     }
     
    return 0;
}
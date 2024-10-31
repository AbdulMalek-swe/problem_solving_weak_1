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
       
         st.push_back(str);
    }
 
     for(auto value:st){
         
          if(mp[value]){
            cout<<"YES"<<endl;
            mp[value]++;
          }else{
            cout<<"NO"<<endl;
            mp[value]++;
            
          }
          
     }
     
    return 0;
}
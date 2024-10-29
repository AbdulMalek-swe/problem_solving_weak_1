#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     map<string,int>mp;
     string str;
     int n;
     cin>>n;
     while(n--){
         cin>>str;
         if(mp.find(str) == mp.end()){
             cout<<"OK"<<endl;
               mp[str]=0;
         }else{
              ++mp[str];
              int num = mp[str];
              string b=  to_string(num);
             cout<<str+b<<endl;
         }
     }
    return 0;
}
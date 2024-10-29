#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n=2;
     int a,b;
     cin>>a>>b;
     int sum=0;
     while(n--){
       int mx = max(a,b);
       sum += mx;
       if(a>b){
        a--;
       }else{
        b--;
       }
     }
     cout<<sum;
    return 0;
}
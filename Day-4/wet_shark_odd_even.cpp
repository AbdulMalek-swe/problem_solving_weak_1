#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n;
     cin>>n;
   long long  int sum=0;
     vector<long long int> vec;
   long long int mn = INT_MAX;
     for (int i = 0; i < n; i++)
     { 
       long long  int value;
         cin>>value;
          vec.push_back(value);
          sum += value;
          if(value%2==1){
            mn=min(mn,value);   
          }
     }
     
     if(sum%2==0){
         cout<<sum<<endl;
     }else{
         cout<<sum-mn<<endl;
     }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int a,b,i,j ;
     cin>>a>>b;
     int cnt = 0;  
     for ( i = 0; i <= a; i++)
     {
         for ( j = 0; j <= a-i; j++)
         {
             for (int k = 0; k <= a-i-j; k++)
             {
                if(i*j*k<=b){
                    ++cnt;
                }
             }
              
         }
         
     }
     cout<<cnt<<endl;
     return 0;
       
}
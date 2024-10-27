
#include <bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       while(n--){
            int a;
      cin>>a;
    string b;
    cin >> b; 
    
     int firstIndex = -1;
     int lastIndex = -1;
     for(int i=0; i<a;i++ ){
      if(b[i]=='B'){
        firstIndex = i;
        break;
      }
     }
     for(int i=a-1; i>=0;i-- ){
      if(b[i]=='B'){
        lastIndex = i;
        break;
      }
     }
     cout<<lastIndex-firstIndex+1<<endl; 
       }
    
    return 0;
}
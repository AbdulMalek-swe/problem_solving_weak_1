 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
      int a,b,c;
      cin >> a >> b >> c;
      int i=1;
      int sum=0;
      int s = a;
      while (a<=c+.5){
          ++i;
          a=s*i;
          sum+=b;
         
      }
      cout << sum << endl;
  
    return 0;
}
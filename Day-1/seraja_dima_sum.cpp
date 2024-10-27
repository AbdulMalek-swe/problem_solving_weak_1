#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
     int lastIndex = n-1;
     int firstIndex = 0;
     int sum = 0;
      for (int i = 0; i < n; i++)
      {

           if(i%2==0){
            sum += max(a[firstIndex],a[lastIndex]);
           }
           if(a[lastIndex]>a[firstIndex]){
            lastIndex--;

           }else{
            firstIndex++;
           }

      }
      cout<<sum<<endl;
    return 0;
       
}
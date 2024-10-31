#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     int n  ;
     cin>>n ;
     while(n--){
        int a;
        cin>>a;
        int odd=0,even=0;
        if(a==1){
            cout<< "-1"<<endl;
        }else if(a==2){
            cout<< "0"<<endl;
        }else{
            if(a%2==0){
                even++;
            }else{
                odd++;
            }
            for(int i= 1;i<=a/2;i++){
                if(i%2==0){
                    even++;
                } else if(i%2==1){
                    odd++;
                }
            }
            if(odd==even){
                cout<< "0"<<endl;
            }
            else if(odd>even){
                cout<< "-1"<<endl;
            }
            else{
                cout<< "1"<<endl;
            }
        }
     }
     
     return 0;
       
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n>>m;
   
    map<string,string>mp;
    while(n--){
       string name, command;
       cin >> name >> command;
         mp[command]='#'+name;
        //   cout<<mp[command]<<endl;
    }    
    
    while(m--){
       string name, command;
       cin >> name >> command; 
        string cp = command;
        command.pop_back();
        cout<<name<<" "<<cp<<" "<<mp[command]<<endl;
    }
    return 0;
}                                                                                                                                                                                                                                                                                     
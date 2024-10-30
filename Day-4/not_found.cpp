#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string st;
    cin >> st;
    sort(st.begin(), st.end());
    auto it = unique(st.begin(), st.end());
    st.erase(it, st.end());
    if(st.size() ==26){
        cout<<"None"<<endl;
        return 0;
    }
    for(int i=0;i<26;i++){
        if(i!=st[i]-'a'){
            cout<<"i found it";
            char ch = static_cast<char>(i+97); 
            cout<<ch<<" "<<endl;
            break;
        }
          
        
    }
    cout << st << endl;
    return 0;
}
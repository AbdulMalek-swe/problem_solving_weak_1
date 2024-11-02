#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {

        string line;
        cin >> line;
        string str;
        int vl = line.size(); 
        stack<int>sm,bg;
        for (int i = 0; i < vl; i++)
        {
            if (line[i]>='A'&&line[i]<='Z' && line[i] != 'B')
            {
                 bg.push(i);
            }
            if (line[i]>='a'&&line[i]<='z' && line[i] != 'b')
            {
                 sm.push(i);
            }
             if (line[i] == 'B' && !bg.empty())
            {
                 line[bg.top()] = '9';
                 bg.pop();
            } 
            if(line[i] == 'b'&& !sm.empty()){
               line[sm.top()] = '9';
                 sm.pop();
            }
             
        }
          for (int i = 0; i < vl; i++)
        {
             if(line[i] != 'B'& line[i] != 'b' & line[i] != '9'){
                 cout << line[i];
             }
        }
        cout << "\n";
         
    }

    return 0;
}
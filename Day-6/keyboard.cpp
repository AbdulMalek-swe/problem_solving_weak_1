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
        for (int i = 0; i < vl; i++)
        {
            if (line[i] == 'B')
            {
                for (int i = str.size() - 1; i >= 0; --i)
                {
                    if (isupper(str[i]))
                    {
                        str.erase(i, 1); 
                        break;
                    }
                }
            }
            else if (line[i] == 'b')
            {
                for (int i = str.size() - 1; i >= 0; --i)
                {
                    if (islower(str[i]))
                    {
                        str.erase(i, 1); 
                        break;
                    }
                }
            }
            else
            {
                str.push_back(line[i]);
            }
        }
        cout << str << endl;
        // for(int i=0;i<str.size();i++){
        //     cout<<val[i]<<endl;
        // }
         
    }

    return 0;
}
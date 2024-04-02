#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define nl "\n"
#define fl(x) for (int i = 0; i < x; i++)
#define fl1(x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define vi vector<int>
#define vout(v)      \
    for (auto i : v) \
    cout << i << " "
#define pp pair<int, int>
#define co(n) cout << n

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        map<string, int> mp;
        int n;
        cin >> n;
        vector<string> v,v2;
        string s;
        fl(n)
        {
            cin >> s;
            mp[s]++;
            v.push_back(s);
        }
       for(auto str:v)
       {
           bool flag = false;
           for (int i = 1; i < str.length(); i++)
           {
               string str2 = str.substr(i, str.length() - i);
               string str3 = str.substr(0, i);
               if (mp[str2] > 0 && mp[str3] > 0)
               {
                   flag = true;
                   break;
               }
           }
           if(flag)
               cout << 1;
            else
                cout << 0;
       }
       cout << nl;
    }

    return 0;
}
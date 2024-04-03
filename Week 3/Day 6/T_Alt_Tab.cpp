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

    map<string,int> mp;
    int t;
    cin >> t;
    stack<string> st;
    while (t--)
    {
        string s;
        cin >> s;
        if(mp[s]==0)
        {
            mp[s]++;
        }
        st.push(s);
    }
   while (!st.empty())
   {
       string s = st.top();
       if(mp[s]!=0)
       {
           cout << s[s.length() - 2] << s[s.length() - 1];
           mp[s]--;
       }
       st.pop();
   }

    return 0;
}
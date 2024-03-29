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
        int n;
        string s,s2="";

        cin >> n >> s;
        s2 += tolower(s[0]);
        for (auto &ch : s)
            ch = tolower(ch);
        for (int i = 1; i < n; i++)
        {
            if(s[i-1]!=s[i])
                s2 += s[i];
        }
        if(s2=="meow")
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
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
        string s;
        cin >> s;
        int ar[26];
        memset(ar, 0, sizeof(ar));
        for (char ch : s)
        {
            ar[ch - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
           if(ar[i]>=2)
               cnt++;
        }
        if(cnt>=2)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
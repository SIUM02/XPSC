#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define nl "\n"
#define fl(i, x) for (int i = 0; i < x; i++)
#define fl1(i, x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define uv(v) unique(v.begin(), v.end())
#define vi vector<int>
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
        map<ll, ll> mp;
        cin >> n;
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }

        int z = n - mx;
        if(z==0)
        {
            cout << 0 << nl;
        continue;
        }
        int ans = 1;
        while(true)
        {
            if(2*mx>=n)
            {
                ans += (n - mx);
                break;
            }
            ans += mx;
            mx *= 2;
            ans++;
        }
        cout << ans<<nl;
    }

    return 0;
}
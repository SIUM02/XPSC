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
        cin >> n;
        vector<ll> v;
        fl(n)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll ans=v[n-1]-v[0];
        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans, v[n-1] - v[i]);
        }
         for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i] - v[0]);
        }

        for (int i = 1; i < n; i++)
        {
            ans = max(ans, v[i - 1] - v[i]);
        }

        cout << ans << nl;
    }

    return 0;
}
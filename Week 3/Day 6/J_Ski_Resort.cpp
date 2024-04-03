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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        ll ans = 0;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll cnt = 0;
            if (v[i]<= q)
            {
                cnt++;
                i++;
                while (i < n)
                {
                    if(v[i]<=q)
                    {
                        cnt++;
                        i++;
                    }
                    else
                    break;
                }
            }
            if(cnt>=k)
            {
                if(cnt==k)
                    ans++;
                else
                {
                    ll a = cnt - k + 1;
                    ans += a*(a + 1) / 2;
                }
            }
        }
            cout << ans << " ";
        cout << nl;
    }

    return 0;
}
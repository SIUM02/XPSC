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
        ll n, q,ts=0;
        cin >> n >> q;
        int x;
        vector<ll> v;
        v.push_back(0);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(v.back() + x);
        }
        ts = v.back();

        ll l, r, k;
        while (q--)
        {
        
        cin >> l >> r >> k;
        int sum = ts - (v[r] - v[l-1]);
        sum += (r - l+1) * k;
        if(sum%2)
            cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }

    return 0;
}
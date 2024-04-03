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
        int n, q;
        cin >> n >> q;
        map<ll,ll> ss;
        map<ll, pair<ll, ll> > mp;

        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (ss[x] == 0)
            {
                mp[x].first = i;
                mp[x].second = i;
            }
            else
            {
                mp[x].first = min(mp[x].first, i);
                mp[x].second = max(mp[x].second, i);
            }

            ss[x]++;
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if(ss[a]==0 || ss[b]==0)
                cout << "NO" << nl;
            else{
                if((mp[b].second-mp[a].first)>=0)
                    cout << "YES" << nl;
                else
                    cout << "NO" << nl;
            }
        }
    }

    return 0;
}
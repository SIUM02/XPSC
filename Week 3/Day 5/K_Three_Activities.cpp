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
        ll n;
        cin >> n;
        priority_queue<pair<ll, ll>> p[3];

        fl(3)
        {
            for (int j = 0; j < n; j++)

            {
                ll x;
                cin >> x;
                p[i].push(make_pair(x, j));
            }
        }

        pair<ll, ll> a[3], b[3], c[3];
        for (int i = 0; i < 3; i++)
        {
            a[i] = p[0].top();
            p[0].pop();
            b[i] = p[1].top();
            p[1].pop();
            c[i] = p[2].top();
            p[2].pop();
        }
        ll sum = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second && c[k].second != b[j].second && a[i].second != c[k].second)
                        sum = max(sum, a[i].first + b[j].first + c[k].first);
                }
            }
        }
        cout << sum << nl;
    }

    return 0;
}
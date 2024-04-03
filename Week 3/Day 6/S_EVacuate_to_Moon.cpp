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
        int n,m,h;
        cin >> n >> m >> h;
        priority_queue<ll> car;
        priority_queue<ll> sta;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            car.push(x);

        }
          for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sta.push(x);
        };
        ll ans = 0;
        for (int i = 0; i < min(n,m); i++)
        {
            if((h*sta.top())>car.top())
                ans += car.top();
            else
                ans += h*sta.top();
            car.pop();
            sta.pop();
        }
        cout << ans << nl;
    }

    return 0;
}
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
        stack<ll> v;
        map<ll, ll> m;
        int n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push(x);
        }
        int cnt = 0;
       
        while (!v.empty())
        {
            m[v.top()]++;
            if (m[v.top()] == 1)
            {
                cnt++;
                v.pop();
            }
            else
             break;
        }

        cout << n-cnt << nl;
    }

    return 0;
}
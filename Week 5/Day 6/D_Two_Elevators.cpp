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
        ll a, b, c;
        cin >> a >> b >> c;
        ll x, y;
        x = (a - 1);
        y = abs(b - c) + (c - 1);
        // cout << x << " " << y << nl;
        if(x==y)
            cout << 3 << nl;
        else if(x<y)
            cout << 1 << nl;
        else
            cout << 2 << nl;
    }

    return 0;
}
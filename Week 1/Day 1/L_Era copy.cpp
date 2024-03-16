#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll mx = INT16_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        int res = 0,ans=0, x=0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > (i+1))
               {
                   x = v[i] - (i + 1);
                   ans = max(ans, x);
               }
        }
        cout <<ans << endl;
    }

    return 0;
}
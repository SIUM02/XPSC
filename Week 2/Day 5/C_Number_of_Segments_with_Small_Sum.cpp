#include <bits/stdc++.h>
#define ll long long 
#define lli long long int
#define nl "\n"
#define fl(x) for (int i = 0; i < x; i++)
#define fl1(x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define uv(v) unique(v.begin(), v.end())
#define vi vector<int>
#define pp pair<int,int>
#define co(n) cout<<n

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll s, n;
    cin >> n >> s;
    ll a[n];
    fl(n)
    {
        cin >> a[i];
    }
    ll ans = 0,ts=0,r=0,l=0;
    while (r<n)
    {
        ts += a[r];
        if(ts<=s)
        {
            ans+=(r-l+1);
        }
        else
        {
            while(ts>s)
             {
                 ts -= a[l];
                 l++;
             }
              if(ts<=s)
        {
            ans+=(r-l+1);
        }
        }
        r++;
    }
    cout << ans << nl;

    return 0;
}
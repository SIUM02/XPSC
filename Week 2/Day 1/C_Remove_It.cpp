#include <bits/stdc++.h>
#define ll long long 
#define lli long long int
#define nl "\n"
#define fl(i, x) for (int i = 0; i < x; i++)
#define fl1(i, x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define sv(v) sort(v.begin(), v.end())
#define vi vector<int>
#define pp pair<int,int>
#define co(n) cout<<n

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, r;
    cin >> n >> r;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if(x==r)
        continue;
        else
            v.push_back(x);
    }
    for(int a:v)
        cout << a << " ";

    return 0;
}
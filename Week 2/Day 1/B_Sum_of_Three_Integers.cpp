#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define nl "\n"
#define fl(i, x) for (int i = 0; i < x; i++)
#define fl1(i, x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define sv(v) sort(v.begin(), v.end())
#define vi vector<int>
#define pp pair<int, int>
#define co(n) cout << n

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, s, ans = 0;
    cin >> a >> s;
    bool f = false;
    for (int i = 0; i <= a; i++)
    {

        for (int j = 0; j <= a; j++)
        {
            int z = s - i - j;

            if(z>=0 && z<=a)
                ans++;
        }
    }
    cout << ans << nl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define nl "\n"
#define fl(i, x) for (int i = 0; i < x; i++)
#define fl1(i, x) for (int i = 1; i < x; i++)
#define sv(v) sort(v.begin(), v.end())
#define uv(v) unique(v.begin(), v.end())
#define vi vector<int>
#define pp pair<int, int>
#define co(n) cout << n

using namespace std;

int cnt(string a, string b)
{
    int ans = 0;
    for (int i = 0; i < a.length(); i++)
    {
        int x = a[i];
        int y = b[i];
        ans += abs(x - y);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        vector<string> v;
        int max = 1000;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i!=j)
                {
                    max = min(max, cnt(v[i], v[j]));
                }
            }
            
        }
        cout << max << nl;
    }

    return 0;
}
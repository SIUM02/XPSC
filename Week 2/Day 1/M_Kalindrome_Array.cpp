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

bool is_pal(vector<int> v)
{
    bool f = true;
    int l = 0;
    int r = v.size() - 1;
    while (l < r)
    {
        if (v[l] != v[r])
        {
            f = false;
            break;
        }
        r--;
        l++;
    }
    return f;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (is_pal(v) == true)
        {
            cout << "YES" << nl;
            continue;
        }
        int l = 0, x, y;
        int r = v.size() - 1;
        while (l < r)
        {
            if (v[l] != v[r])
            {
                x = v[r];
                y = v[l];
                break;
            }
            if (v[l] == v[r])
            {
                l++;
                r--;
            }
        }
        vector<int> v1;
        vector<int> v2;


        for (int i : v)
        {
            if (i != x)
                v1.push_back(i);
            if (i != y)
                v2.push_back(i);
        }
        bool f = (is_pal(v1) || is_pal(v2));
        if (f)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
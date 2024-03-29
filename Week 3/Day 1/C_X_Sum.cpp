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
ll m, n;
ll arr[205][205];


bool valid(int si, int sj)
{
    if (si >= m || si < 0 || sj >= n || sj < 0)
        return false;
    else
        return true;
}

ll sum1(int i,int j)
{
    ll sm = 0;
    i++;
    j++;
    while (valid(i, j))
    {
        sm += arr[i][j];
        i++;
        j++;
    }
    return sm;
}
ll sum2(int i,int j)
{
    ll sm = 0;
    i++;
    j--;
    while (valid(i, j))
    {
        sm += arr[i][j];
        i++;
        j--;
    }
    return sm;
}
ll sum3(int i,int j)
{
    ll sm = 0;
    i--;
    j++;
    while (valid(i, j))
    {
        sm += arr[i][j];
        i--;
        j++;
    }
    return sm;
}
ll sum4(int i,int j)
{
    ll sm = 0;
    i--;
    j--;
    while (valid(i, j))
    {
        sm += arr[i][j];
        i--;
        j--;
    }
    return sm;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
    ll mx = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mx = max(mx, sum1(i, j)+sum2(i, j)+sum3(i, j)+sum4(i, j)+arr[i][j]);
            }
        }
    cout << mx<<nl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define ll long long 
#define lli long long int
#define nl "\n"
#define fl(i, x) for (int i = 0; i < x; i++)
#define fl1(i, x) for (int i = 1; i < x; i++)
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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string a, b;
        cin >> n>>a>>b;

        bool f = true;
        for (int i = 0; i < n; i++)
        {
           if(!(a[i]==b[i] || (a[i]=='G'&&b[i]=='B') || (a[i]=='B'&&b[i]=='G')))
            {
                f = false;
                break;
            }
        }
        if(f)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}
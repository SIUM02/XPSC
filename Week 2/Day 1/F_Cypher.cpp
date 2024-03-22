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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >>x ;
            a[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            int l;
            string s;
            cin >> l >> s;
            for(char ch :s)
            {
                if(ch=='D')
                    a[i]++;
                    else
                        a[i]--;

                if(a[i]==10)
                     a[i] = 0;
                if(a[i]==-1)
                     a[i] = 9;
            }
        }
        for (int i = 0; i < n;i++)
            cout << a[i] << " ";
        cout << nl;
    }

return 0;
}
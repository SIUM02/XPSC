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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vi v(n);
        fl(n)
            cin>>v[i];
        sort(v.begin(),v.end(),greater<int>());
     vout(v);
        cout<<endl;
    }

    return 0;
}
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
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        fl(n)
        cin>>v[i];
        
        int a,b,c=0;
        for (int i = 1; i < n-1; i++)
        {
           if(v[i]>v[i-1] && v[i]>v[i+1])
            {
                a=i;
                b=i+1;
                c=i+2;
                break;
            }
        }
        if(c==0)
        cout<<"NO"<<nl;
        else
        {
            cout<<"YES\n"<<a<<" "<<b<<" "<<c<<nl;
        }
        
    }
    

    return 0;
}
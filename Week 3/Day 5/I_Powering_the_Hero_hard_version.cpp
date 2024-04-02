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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        priority_queue<ll> pq;
        while (n--)
        {
            int x;
            cin >> x;
            if(x==0)
            {
                if(!pq.empty())
                {

                sum += pq.top();
                pq.pop();
                }
            }
            else
                pq.push(x);
        }

        cout <<sum<< endl;
    }

    return 0;
}
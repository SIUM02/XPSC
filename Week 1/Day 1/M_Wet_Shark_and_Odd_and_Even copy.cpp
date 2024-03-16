#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    sort(v.begin(), v.end());
    if(sum%2==1)
    {
        int i = 0;
        while (true)
        {
            if(v[i]%2==0)
            {
                i++;
                continue;
            }
            else
            {
                sum -= v[i];
            break;
            }
            // if(sum%2==0)
        }
    }

    cout << sum<<endl;

    return 0;
}
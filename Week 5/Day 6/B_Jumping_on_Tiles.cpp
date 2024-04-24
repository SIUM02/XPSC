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
        string s;
        cin >> s;
        int n = s.length();
        int ans = abs(s[n - 1] - s[0]);
        // cout << ans<<nl;
        int arr[26];
        memset(arr, 0, sizeof(arr));
        for (char ch : s)
        {
            arr[ch - 'a']++;
        }
        int lastindx;
        for (int i = 26; i >= 0; i--)
        {
           if(arr[i]>0)
           {
               lastindx = i;
               break;
           }
        }
        int arrsize;
        char lastch = char(lastindx + 'a');
        if (lastch == s[0] || s[n - 1] == lastch)
            arrsize = s.length();
        else
            arrsize = s.length() - arr[lastindx];

     
        cout << ans << " " << arrsize<< nl;
       

    return 0;
}
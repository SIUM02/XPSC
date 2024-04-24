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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            string str = "";
            if (s[i] == '0')
            {
                str += s[i - 2];
                str += s[i - 1];
                int n = stoi(str);
                ans += (char)('a' + n - 1);
                i -= 2;
            }
            else
            {
                str += s[i];
                int n = stoi(str);
                ans += (char)('a' + n - 1);
            }
        }
        for (int i = ans.length() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << nl;
    }

    return 0;
}
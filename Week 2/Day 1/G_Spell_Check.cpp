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
    vector<char> v1;
        string name = "Timur";
        for (char ch : name)
        {
            v1.push_back(ch);
        }
        sv(v1);

        while (t--)
        {
            int n;
            string s;
            cin >> n >> s;
            int ans = 0;
            vector<char> v2;
            for (char ch : s)
            {
                v2.push_back(ch);
            }
            sv(v2);
            if (v1==v2)
                cout << "YES" << endl;
            else
            cout << "NO" << endl;
    }

    return 0;
}
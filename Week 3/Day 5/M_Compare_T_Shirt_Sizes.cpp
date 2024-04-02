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
        string x, y;
        cin >> x >> y;
        queue<char> a, b;
        for(char ch:x)
            a.push(ch);
        for(char ch:y)
            b.push(ch);
        // cout << t<< " ";
        if (a == b)
        {
            cout << "=" << nl;
            continue;
         }
         else
         {
            if((a.back()=='L' && b.back()!='L') || (a.back()!='S' && b.back()=='S'))
                cout << ">" << nl;
            else if((a.back()!='L' && b.back()=='L') || (a.back()=='S' && b.back()!='S'))
                cout << "<" << nl;
            else if(a.back()==b.back())
            {
                if(a.back()=='S')
                {
                    if(a.size()>b.size())
                        cout << "<" << nl;
                    else
                        cout << ">" << nl;
                }
                else
                {
                     if(a.size()>b.size())
                        cout << ">" << nl;
                    else
                        cout << "<" << nl;
                }
            }
            
           
         }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<string, int> all_word;
        map<string, int> a, b, c;
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            all_word[s]++;
            a[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            all_word[s]++;
            b[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            all_word[s]++;
            c[s]++;
        }
        int ca = 0, cb = 0, cc = 0;
        for (auto it : all_word)
        {
            if (all_word[it.first] == 3)
                continue;
            else
            {
                if (all_word[it.first] == 2)
                {
                    if (a[it.first] == 1 && b[it.first] == 1)
                    {
                        ca++;
                        cb++;
                    }
                    if (b[it.first] == 1 && c[it.first] == 1)
                    {
                        cc++;
                        cb++;
                    }
                    if (a[it.first] == 1 && c[it.first] == 1)
                    {
                        cc++;
                        ca++;
                    }
                }
                else
                {
                    if (a[it.first] == 1)
                        ca += 3;
                    if (b[it.first] == 1)
                        cb += 3;
                    if (c[it.first] == 1)
                        cc += 3;
                }
            }
        }
        cout <<ca<<" "<<cb<<" "<<cc<< endl;
    }

    return 0;
}
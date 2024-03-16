#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int ans = 0;


        for (int i = 0; i < s.length();i++)
            {
                if (s[i] == c)
                {
                int sec = 0;
                   for (int j = i; j < s.length(); j++,i++)
                   {
                       if(s[j]=='g')
                       {
                       break;
                       }
                       sec++;
                   }
                   ans = max(ans, sec);
                }
            }
            cout <<ans<< endl;
    }

    return 0;
}
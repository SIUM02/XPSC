
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = -1, i = 1;
    while (c <= b)
    {
        c = c * i;
        if (c >= a && c <= b)
        {
            ans = c;
            break;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}

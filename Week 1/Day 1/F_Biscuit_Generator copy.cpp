#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, t,i=1,ans=0;
    cin >> a >> b >> t;
    if(a>t)
        cout << ans << endl;
    else
    {
        cout << (t / a) * b << endl;
    }
    return 0;
}
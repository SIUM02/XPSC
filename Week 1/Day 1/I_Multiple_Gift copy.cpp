#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, y;
    cin >> x >> y;
    int i = 0,cnt=0;
    while (true)
    {
       if(x>y)
       break;
        x = x * 2;
        cnt++;
        i++;
    }

    cout <<cnt<< endl;

    return 0;
}
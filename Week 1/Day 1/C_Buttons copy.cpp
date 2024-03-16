#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    if(a==b)
        cout << 2 * a << endl;
    else
     {
         int n = max(a, b);
         cout << 2 * n - 1<<endl;
     }
    return 0;
}
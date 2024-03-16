#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
   int cnt[n + 1];
   memset(cnt, 0, sizeof(cnt));

   for (int i = 1; i < n; i++)
   {
       int x;
       cin >> x;
       cnt[x]++;
   }
   int ans;
   for (int i = 1; i <= n; i++)
   {
       if(cnt[i]==0)
           {ans = i;
           break;}
   }
   cout << ans;

   return 0;
}
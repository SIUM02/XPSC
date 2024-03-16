#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;

    bool f = false;
    for (int i = 0; i < 10000; i++)
    {
         if((d-(b*i))<0)
          {
         break;
          }
        if(((d-(b*i))%a)==0)
         {
             f = true;
             break;
         }
    }

    if(f==true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
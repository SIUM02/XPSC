#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = n;
    int d = 0;
    while (a != 0)
    {
        a = a / 10;
        d++;
    }
    string s = "";
    if(n==0)
    {
        s += "0000";
    }
    else
    {

    for (int i = 0; i < 4-d; i++)
    {
        s += "0";
    }
    s += to_string(n);
    }
    cout << s <<endl;

    return 0;
}
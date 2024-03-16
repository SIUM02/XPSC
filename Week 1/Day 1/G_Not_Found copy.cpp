#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    int arr[26];
    memset(arr, 0, sizeof(arr));
    for(char c:s)
    {
        int n = c - 'a';
        arr[n]++;
    }
    bool f = false;
    char c;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]==0)
        {
            c = 'a' + i;
            f = true;
            break;
        }
    }
    if(f)
        cout << c << endl;
    else
        cout << "None" << endl;

    return 0;
}
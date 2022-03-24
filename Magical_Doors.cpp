#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        string s1;
        cin >> s1;
        int n = s1.length();
        int ans = 0;
        if (s1[0] == '0')
        {
            ans = 1;
        }
        for (int i = 1; i < n; i++)
        {
            if (s1[i] != s1[i - 1])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
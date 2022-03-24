#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        int s1len = s1.length();
        int s2len = s2.length();
        if (s1len != s2len)
        {
            cout << "NO" << endl;
        }
        int i = 0, j = 0, cnt = 0;
        for (i = 0; i < s1len; i++)
        {
            for (j = 0; j < s2len; j++)
            {
                if (s1[i] == s2[j])
                {
                    cnt++;
                    continue;
                }
            }
        }

        if (cnt == s1.length())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
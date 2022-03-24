#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;
        string s2 = "pawri";
        string s3 = "party";
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (ans == s3)
            {
                s.replace(i, 5, s2);
            }
            ans = s.substr(i, 5);
        }
        cout << s << endl;
    }
    return 0;
}
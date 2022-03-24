#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        int x, y, d;
        cin >> x >> y >> d;

        int total = x - y;
        if (total <= d)
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
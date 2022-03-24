#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        int diff = 0;
        int maxdiff = 0;
        for (int i = 0; i < n; i++)
        {
            diff = abs(a[i] - a[i + 1]);
            maxdiff = min(maxdiff, diff);
        }
        cout << maxdiff << endl;
    }
    return 0;
}
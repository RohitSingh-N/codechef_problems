#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long int maxx = *max_element(a.begin(), a.end());
        long long ans = 0;
        for (auto i : a)
        {
            ans = max(ans, maxx - i);
        }
        cout << ans << endl;
    }
}
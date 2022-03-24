#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        int n, k;
        int size = n + k;
        vector<int> a(size);
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        // int size = n + k;
        // vector<int> b(size);
        // for (int i = 0; i < size; i++)
        // {
        //     b[i] = a[i];
        // }
        int mid = size / 2;
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == mid)
            {
                ans = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
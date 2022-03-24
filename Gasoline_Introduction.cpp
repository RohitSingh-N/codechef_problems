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

        int sum = a[0];
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (sum == 0)
            {
                break;
            }

            sum = sum - 1 + a[i + 1];
            cnt++;
        }
        cout << sum + cnt << endl;
    }
    return 0;
}

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
        int cnt = 0;
        vector<int> newl(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    cnt++;
                }
            }
            newl.push_back(cnt);
        }

        for (auto i : newl)
        {
            cout << i << endl;
        }
    }
    return 0;
}
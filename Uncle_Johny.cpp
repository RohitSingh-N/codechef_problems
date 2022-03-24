#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n;
        vector<int> a(n);

        int temp = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        int pos = a[k - 1];

        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == pos)
            {
                temp = i;
            }
        }
        cout << temp + 1 << endl;
    }
}
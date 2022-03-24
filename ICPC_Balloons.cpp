#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool hasall(vector<int> a)
{
    int cnt = 0;
    for (auto it : a)
    {
        if (it >= 1 && it <= 7)
        {
            cnt++;
        }
    }
    if (cnt == 7)
    {
        return true;
    }
    return false;
}
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
        for (int i = 0; i < n; i++)
        {
            vector<int> arr;
            for (int j = 0; j <= i; j++)
            {
                arr.push_back(a[j]);
            }
            if (hasall(arr))
            {
                cout << i + 1 << endl;
                break;
            }
        }
        return 0;
    }
}
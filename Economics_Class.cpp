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
        int arr1[n], arr2[n];
        for (int i = 1; i < n; i++)
        {
            cin >> arr1[i];
            cin >> arr2[i];
        }

        int cnt = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr1[j] == arr2[j])
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
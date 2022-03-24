#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, K;
        cin >> n >> K;
        valarray<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sums = a.sum();
        cout << sum % K << endl;
    }
    return 0;
}
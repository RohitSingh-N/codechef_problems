#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int partner_s = 2 * N - X;
        cout << partner_s + 1 << endl;
    }
}
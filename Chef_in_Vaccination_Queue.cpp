#include <bits/stdc++.h>
using namespace std;
#define num int
#define ll long long
#define in cin >>
#define out cout <<
// #define and &&
// #define or ||
// #define Xor ^

int main()
{
    num t;
    in t;
    while (t--)
    {
        num N, P, X, Y;
        cin >> N >> P >> X >> Y;
        num arr[N];
        for (int i = 0; i < N; i++)
        {
            in arr[i];
        }
        num cnt1 = 0;
        num cnt0 = 0;
        for (int J = 1; J <= P; J++)
        {
            if (arr[J] == 0)
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        num ans1 = cnt0 * X;
        num ans2 = cnt1 * Y;
        cout << ans1 + ans2 << endl;
    }

    return 0;
}
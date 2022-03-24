#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y;
        cin >> X >> Y;
        int xeven = 0, xodd = 0, yodd = 0, yeven = 0;
        xeven = xodd = (X / 2);
        yeven = yodd = (Y / 2);

        if (X % 2 != 0)
        {
            xodd = X / 2 + 1;
        }
        if (Y % 2 != 0)
        {
            yodd = Y / 2 + 1;
        }
        int ans = (xeven * yeven) + (xodd * yodd);

        cout << ans << endl;
    }
}
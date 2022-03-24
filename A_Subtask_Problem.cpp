#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;
        cin >> K >> M >> K;
        vector<int> a(N);
        int cnt1 = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                cnt1++;
            }
        }
        int cnt2 = 0;
        for (int i = 0; i < M; i++)
        {
            if (a[i] == 1)
            {
                cnt2++;
            }
        }

        if (cnt1 == N)
        {
            cout << 100 << endl;
        }
        else if (cnt2 >= M)
        {
            cout << 50 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}

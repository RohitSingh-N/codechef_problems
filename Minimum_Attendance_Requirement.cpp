#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr;
        cin >> arr;

        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr.at(i) == '1')
            {
                cnt1++;
            }
        }
        int dys_left = 120 - n;
        int maxatt = 90;
        int maxabs = 30;
        int total_days = dys_left + cnt1;
        if (total_days >= 90)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
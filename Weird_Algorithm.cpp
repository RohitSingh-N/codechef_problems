#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    v.push_back(n);
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > i; j++)
        {
            if (n & 1)
            {
                n = n * 3 + 1;
            }
            else
            {
                n = n / 2;
            }
        }
        v.push_back(n);
    }
}
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
    num n;
    in n;
    num arr[n];
    for (num i = 0; i < n; i++)
    {
        in arr[i];
    }
    num last_zero = 0;
    num curr_ind = 0;
    num length = INT_MIN;
    for (num i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            last_zero = i;
        }
        curr_ind = i - last_zero;
        length = max(length, curr_ind);
    }
    cout << length << endl;

    return 0;
}
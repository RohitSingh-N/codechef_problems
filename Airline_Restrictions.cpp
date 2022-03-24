#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define in cin >>
#define out cout <<

int main()
{
    int t;
    in t;
    while (t--)
    {
        int A, B, C, D, E;
        cin >> A >> B >> C >> D >> E;

        if ((A + B <= D) && C <= E)
        {
            cout << "YES" << endl;
        }
        else if ((A + C <= D) && B <= E)
        {
            cout << "YES" << endl;
        }
        else if ((B + C <= D) && (A <= E))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
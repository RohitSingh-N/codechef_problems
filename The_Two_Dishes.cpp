#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        if (s <= n)
        {
            cout << 1 << endl;
        }

        else
        {
            cout << 2 * n - s << endl;
        }
    }
}
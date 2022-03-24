#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (i > 1)
            {
                if (arr[i] != arr[i - 1])
                {
                    cnt++;
                    continue;
                }
            }
            if (i < n)
            {
                if (arr[i] != arr[i + 1])
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int N, M, k, cnt = 0;
    cin >> N >> M >> k;
    for (int i = 0; i < N; i++)
    {
        int arr[k], Q, sum = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
            cin >> Q;
            ;
            sum = sum + arr[i];
        }
        if (sum >= M && Q <= 10)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}

3 4 15 5 3 9 3 7 7 6 3 6 10 1 4 2 3 100
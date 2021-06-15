// 21918. 전구
// 2021.06.15
// 시뮬레이션
#include<iostream>

using namespace std;

int arr[4001];
int main()
{
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> x >> y;
            arr[x] = y;
            break;
        case 2:
            cin >> x >> y;
            for (int j = x; j <= y; j++)
            {
                arr[j] = !arr[j];
            }
            break;
        case 3:
            cin >> x >> y;
            for (int j = x; j <= y; j++)
            {
                arr[j] = 0;
            }
            break;
        case 4:
            cin >> x >> y;
            for (int j = x; j <= y; j++)
            {
                arr[j] = 1;
            }
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

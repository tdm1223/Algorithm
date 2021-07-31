// 20205. 교수님 그림이 깨지는데요?
// 2021.07.31
// 구현
#include<iostream>

using namespace std;

int arr[11][11];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int t1 = 1; t1 <= k; t1++)
        {
            for (int j = 1; j <= n; j++)
            {
                for (int t2 = 1; t2 <= k; t2++)
                    cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

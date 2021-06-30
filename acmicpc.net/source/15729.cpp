// 15729. 방탈출
// 2021.07.01
// 그리디 알고리즘
#include<iostream>

using namespace std;

int arr[1000001];
int main()
{
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ans++;
            for (int j = 0; j < 3; j++)
            {
                if (i + j < n)
                {
                    if (arr[i + j] == 0)
                    {
                        arr[i + j] = 1;
                    }
                    else
                    {
                        arr[i + j] = 0;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}

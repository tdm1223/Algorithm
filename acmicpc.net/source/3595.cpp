// 3595. 맥주 냉장고
// 2021.09.02
// 브루트 포스
#include<iostream>

using namespace std;

int main()
{
    int minValue = 987654321;

    int n;
    cin >> n;
    int ans[3] = { 0,0,0 };
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i * j > n)
            {
                break;
            }
            for (int k = 1; k <= n; k++)
            {
                if (i * j * k > n)
                {
                    break;
                }
                else if (i * j * k < n)
                {
                    continue;
                }
                else
                {
                    int size = i * j * 2 + i * k * 2 + j * k * 2;
                    if (size < minValue)
                    {
                        minValue = size;
                        ans[0] = i;
                        ans[1] = j;
                        ans[2] = k;
                    }
                    break;
                }
            }
        }
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
    return 0;
}

// 2622. 삼각형만들기
// 2020.07.17
// 수학
#include<iostream>

using namespace std;

int ans;
int main()
{
    int n;
    cin >> n;
    for (int a = 1; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            int c = n - a - b;
            if (c < b)
            {
                break;
            }
            if (a + b > c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

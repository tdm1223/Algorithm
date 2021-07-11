// 3060. 욕심쟁이 돼지
// 2021.07.12
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int food;
        int ans = 0;
        int foodSum = 0;
        for (int j = 1; j < 7; ++j)
        {
            cin >> food;
            foodSum += food;
        }

        // 음식의 총 수는 하루에 4배씩 늘어난다
        int mul = 1;
        while (1)
        {
            ans++;
            if (n - (foodSum * mul) < 0)
            {
                break;
            }
            mul *= 4;
        }
        cout << ans << endl;
    }
    return 0;
}

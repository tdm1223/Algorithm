// 9063. 대지
// 2022.04.06
// 기하학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    int a, b;
    if (n == 1)
    {
        cin >> a >> b;
        ans = 0;
    }
    else
    {
        pair<int, int> xPos;
        pair<int, int> yPos;
        xPos.first = 987564321;
        xPos.second = -987654321;
        yPos.first = 987564321;
        yPos.second = -987654321;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a < xPos.first)
            {
                xPos.first = a;
            }
            if (a > xPos.second)
            {
                xPos.second = a;
            }

            if (b < yPos.first)
            {
                yPos.first = b;
            }
            if (b > yPos.second)
            {
                yPos.second = b;
            }
        }

        ans = (xPos.second - xPos.first) * (yPos.second - yPos.first);
    }
    cout << ans << endl;
    return 0;
}

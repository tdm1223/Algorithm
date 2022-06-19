// 2566. 최댓값
// 2022.06.19
// 입문용
#include<iostream>

using namespace std;

int map[10][10];
int main()
{
    int max = -1;
    int x = -1;
    int y = -1;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cin >> map[i][j];
            if (map[i][j] > max)
            {
                max = map[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << max << endl << x << " " << y << endl;
    return 0;
}

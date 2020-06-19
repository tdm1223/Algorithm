// 2448. 별 찍기 - 11
// 2020.06.19
// 별 찍기
#include<iostream>

using namespace std;

char arr[3072][6144];
// 삼각형 그리는 함수(시에르핀스키 가스켓)
// n은 삼각형의 높이, 삼각형의 위 꼭지점 좌표(x,y)
void printStar(int n, int x, int y)
{
    // n=3일때 기본적인 삼각형 그리기
    if (n == 3)
    {
        arr[y][x] = '*';
        arr[y + 1][x - 1] = '*';
        arr[y + 1][x + 1] = '*';
        arr[y + 2][x - 2] = '*';
        arr[y + 2][x - 1] = '*';
        arr[y + 2][x] = '*';
        arr[y + 2][x + 1] = '*';
        arr[y + 2][x + 2] = '*';
        return;
    }
    printStar(n / 2, x, y); // 위
    printStar(n / 2, x - (n / 2), y + (n / 2)); // 좌
    printStar(n / 2, x + (n / 2), y + (n / 2)); // 우
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j == 2 * n - 1)
            {
                arr[i][j] = NULL;
            }
            else
            {
                arr[i][j] = ' ';
            }
        }
    }

    // 출력
    printStar(n, n - 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}

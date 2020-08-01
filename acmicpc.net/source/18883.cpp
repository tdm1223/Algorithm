// 18883. N M 찍기
// 2020.08.01
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", cnt++);
            if (j != m - 1)
            {
                printf(" ");
            }
        }
        cout << "\n";
    }
    return 0;
}

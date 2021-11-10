// 15739. 매직스퀘어
// 2021.11.11
// 구현
#include<iostream>
#include<set>

using namespace std;

int arr[101][101];
set<int> sets;
int main()
{
    int n;
    cin >> n;
    int val = n * (n * n + 1) / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            sets.insert(arr[i][j]);
        }
    }
    bool flag = true;

    // 중복 되는 수가 없어야 한다.
    if (sets.size() != n * n)
    {
        flag = false;
    }

    // 행의 합
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum != val)
        {
            flag = false;
            break;
        }
    }

    // 열의 합
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        if (sum != val)
        {
            flag = false;
            break;
        }
    }

    int sum = 0;

    // 좌상->우하
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    if (sum != val)
    {
        flag = false;
    }

    sum = 0;

    // 우상->좌하
    for (int i = 0; i < n; i++)
    {
        sum += arr[i][n - i - 1];
    }
    if (sum != val)
    {
        flag = false;
    }

    if (flag)
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
    return 0;
}

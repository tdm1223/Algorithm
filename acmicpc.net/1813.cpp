// 1813. 마지막 한마디
// 2019.12.14
// 브루트 포스
#include<iostream>

using namespace std;

int arr[100001];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        arr[m]++;
    }
    for (int i = n; i >= 0; i--)
    {
        if (arr[i] == i)
        {
            cout << i << endl;
            return 0;
        }
    }
    // 모순처리
    cout << -1 << endl;
    return 0;
}

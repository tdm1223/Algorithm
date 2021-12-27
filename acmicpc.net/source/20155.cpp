// 20155. 우리 집 밑에 편의점이 있는데
// 2021.12.27
// 구현
#include<iostream>

using namespace std;

int arr[1001];
int main()
{
    int n, m;
    cin >> n >> m;
    // 빈도수 저장
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        arr[t]++;
    }

    // 최빈값 출력
    int ans = 0;
    for (int i = 0; i < 1000; i++)
    {
        ans = ans > arr[i] ? ans : arr[i];
    }
    cout << ans << endl;
    return 0;
}

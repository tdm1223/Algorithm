// 11170. 0의 개수
// 2021.11.07
// 브루트 포스
#include<iostream>
#include<string>

using namespace std;

int arr[1000001];
void CalcZero(int num)
{
    string tmp = to_string(num);
    for (int i = 0; i < tmp.size(); i++)
    {
        if (tmp[i] == '0')
        {
            arr[num]++;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < 1000001; i++)
    {
        CalcZero(i);
    }

    while (t-- > 0)
    {
        int n, m;
        cin >> n >> m;

        int ans = 0;
        for (int i = n; i <= m; i++)
        {
            ans += arr[i];
        }
        cout << ans << endl;
    }

    return 0;
}

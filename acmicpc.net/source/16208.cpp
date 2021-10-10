// 16208. 귀찮음
// 2021.10.10
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    // 합을 미리 구해 놓는다.
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    // 하나씩 자르면서 곱한값을 더한다.
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= v[i];
        ans += sum * v[i];
    }
    cout << ans << endl;
    return 0;
}

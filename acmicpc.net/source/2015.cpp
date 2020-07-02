// 2015. 수들의 합 4
// 2020.07.02
// 자료구조
#include<iostream>
#include<map>

using namespace std;

int prefixSum[200001];

map<int, int> maps;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int k;
    long long ans = 0;

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        // 누적합 저장
        prefixSum[i] = prefixSum[i - 1] + tmp;
    }

    for (int i = 1; i <= n; i++)
    {
        // i까지 누적합이 k일때
        if (prefixSum[i] == k)
        {
            ans++;
        }

        // i까지 누적합 - k인 값이 존재했다면 더한다.
        ans += maps[prefixSum[i] - k];

        // i까지 누적합을 map에 저장해준다.
        maps[prefixSum[i]]++;
    }

    cout << ans << endl;
    return 0;
}

// 8996. 전봇대
// 2020.07.02
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long long> v;

// 전봇대 간의 간격을 k로 할 때 필요한 이동거리의 합을 계산하는 함수
long long calDist(long long k)
{
    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += abs(i * k - v[i]);
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long low = 1;
    long long high = 1e9;
    while (low + 3 <= high)
    {
        // 삼분탐색(두 점 사이의 거리 중 1/3 지점과 2/3 지점)
        int left = (2 * low + high) / 3;
        int right = (low + 2 * high) / 3;

        long long costL = calDist(left);
        long long costR = calDist(right);

        if (costL < costR)
        {
            high = right;
        }
        else {
            low = left;
        }
    }

    long long ans = 1e18;
    for (int i = low; i <= high; i++)
    {
        ans = min(ans, calDist(i));
    }
    cout << ans << endl;
    return 0;
}

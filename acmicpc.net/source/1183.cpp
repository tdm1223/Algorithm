// 1183. 약속
// 2022.03.07
// 정렬
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.push_back(a - b);
    }

    sort(v.begin(), v.end());

    // 홀수일 경우 답은 1
    if (n % 2 == 1)
    {
        cout << 1 << endl;
    }
    // 짝수일 경우 v[n/2] v[n/2-1] 사이의 모든 수들의 합을 최소로 만드는 값
    else
    {
        cout << v[n / 2] - v[n / 2 - 1] + 1 << endl;
    }

    return 0;
}

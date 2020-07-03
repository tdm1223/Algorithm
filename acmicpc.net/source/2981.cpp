// 2981. 검문
// 2020.07.03
// 수학
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int GCD(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return GCD(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // 오름차순 정렬
    sort(v.begin(), v.end());
    int gcd = v[1] - v[0];
    for (int i = 2; i < n; i++)
    {
        gcd = GCD(gcd, v[i] - v[i - 1]);
    }

    set<int> result;
    for (int i = 2; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            result.insert(i);
            result.insert(gcd / i);
        }
    }

    result.insert(gcd);
    for (auto k : result)
    {
        cout << k << " ";
    }
    cout << endl;
    return 0;
}

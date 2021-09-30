// 8974. 희주의 수학시험
// 2021.09.30
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(0);

    // 넉넉하게 100까지 넣어본다(5050개)
    for (int i = 1; i <= 100; i++)
    {
        for (int j = 0; j < i; j++)
        {
            v.push_back(i);
        }
    }

    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i <= b; i++)
    {
        ans += v[i];
    }
    cout << ans << endl;

    return 0;
}

// 20953. 고고학자 예린
// 2022.02.21
// 수학
#include<iostream>

using namespace std;

auto dolmen(long long a, long long b) -> long long
{
    long long sum = ((a + b) * (a + b) * (a + b - 1)) / 2;
    return sum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    long long a, b;
    while (t-- > 0)
    {
        cin >> a >> b;
        cout << dolmen(a, b) << "\n";
    }
    return 0;
}

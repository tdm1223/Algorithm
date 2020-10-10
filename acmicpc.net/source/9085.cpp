// 9085. 더하기
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    int sum = 0;
    int n;
    int k;
    cin >> t;
    while (t-- > 0)
    {
        cin >> n;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            sum += k;
        }
        cout << sum << endl;
    }
    return 0;
}

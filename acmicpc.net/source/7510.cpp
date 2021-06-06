// 7510. 고급 수학
// 2021.06.06
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, b, c, sum;
    int cnt = 0;
    while (n-- > 0)
    {
        cnt++;
        cin >> a >> b >> c;
        sum = a + b + c;
        int minValue = min(min(a, b), c);
        int maxValue = max(max(a, b), c);
        int middleValue = sum - minValue - maxValue;

        cout << "Scenario #" << cnt << ":" << endl;
        if ((minValue * minValue) + (middleValue * middleValue) == maxValue * maxValue)
        {
            cout << "yes" << endl << endl;
        }
        else
        {
            cout << "no" << endl << endl;
        }
    }
    return 0;
}

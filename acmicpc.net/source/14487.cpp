// 14487. 욱제는 효도쟁이야!!
// 2021.06.16
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    int sum = 0;
    int maxValue = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (maxValue < k)
        {
            maxValue = k;
        }
        sum += k;
    }
    cout << sum - maxValue << endl;
    return 0;
}

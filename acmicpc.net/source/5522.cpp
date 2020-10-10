// 5522. 카드 게임
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int sum = 0;

    int k;
    for (int i = 0; i < 5; i++)
    {
        cin >> k;
        sum += k;
    }
    cout << sum << endl;
    return 0;
}

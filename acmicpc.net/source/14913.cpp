// 14913. 등차수열에서 항 번호 찾기
// 2021.08.29
// 수학
#include<iostream>

using namespace std;

int main()
{
    int a, d, k;
    cin >> a >> d >> k;

    if ((k - a) % d == 0 && (k - a) / d >= 0)
    {
        cout << (k - a) / d + 1 << endl;
    }
    else
    {
        cout << "X" << endl;
    }
    return 0;
}

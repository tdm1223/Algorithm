// 20492. 세금
// 2021.06.22
// 수학
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n * 78 / 100 << ' ' << n * 8 / 10 + n * 2 / 10 * 78 / 100 << endl;
    return 0;
}

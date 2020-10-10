// 10178. 할로윈의 사탕
// 2020.10.10
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;
        cout << "You get " << a / b << " piece(s) and your dad gets " << a % b << " piece(s)." << endl;
    }
    return 0;
}

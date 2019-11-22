// 17945. 통학의 신
// 2019.11.22
// 수학
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // 짝수 공식 사용
    int x = -a + sqrt(a*a - b);
    int y = -a - sqrt(a*a - b);
    if (x == y)
    {
        cout << x << endl;
    }
    else if (x > y)
    {
        cout << y << " " << x << endl;
    }
    else if (x < y)
    {
        cout << x << " " << y << endl;
    }
    return 0;
}

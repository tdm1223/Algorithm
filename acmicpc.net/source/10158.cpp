// 10158. 개미
// 2021.08.15
// 수학
#include<iostream>

using namespace std;

int main()
{
    int w, h, p, q, t;
    cin >> w >> h >> p >> q >> t;

    // 2*w, 2*h의 사이클을 가지고 있다.
    p = (p + t) % (2 * w);
    q = (q + t) % (2 * h);

    // p, q가 w, h를 넘을경우 반대방향인 상황이다.
    if (p > w)
    {
        p = 2 * w - p;
    }
    if (q > h)
    {
        q = 2 * h - q;
    }
    cout << p << " " << q << endl;
    return 0;
}

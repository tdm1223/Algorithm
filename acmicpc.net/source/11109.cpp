// 11109. 괴짜 교수
// 2022.03.09
// 수학
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int d, n, s, p;
    while (t-- > 0)
    {
        cin >> d >> n >> s >> p;

        int parallel = d + n * p;
        int serial = n * s;

        if (parallel > serial)
        {
            cout << "do not parallelize" << endl;
        }
        else if (parallel < serial)
        {
            cout << "parallelize" << endl;
        }
        else
        {
            cout << "does not matter" << endl;
        }
    }
    return 0;
}

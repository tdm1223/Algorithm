// 16431. 베시와 데이지
// 2021.04.19
// 수학
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    pair<int, int> bessie;
    pair<int, int> daisy;
    pair<int, int> john;

    cin >> bessie.first >> bessie.second >> daisy.first >> daisy.second >> john.first >> john.second;

    // 데이지가 존에게 가는 최소 시간
    int d = abs(john.first - daisy.first) + abs(john.second - daisy.second);

    // 베시가 존에게 가는 최소 시간
    int b = max(abs(john.first - bessie.first), abs(john.second - bessie.second));

    if (d > b)
    {
        cout << "bessie" << endl;
    }
    else if (b > d)
    {
        cout << "daisy" << endl;
    }
    else
    {
        cout << "tie" << endl;
    }
    return 0;
}

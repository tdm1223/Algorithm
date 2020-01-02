// 14924. 폰 노이만과 파리
// 2020.01.02
// 입문용
#include<iostream>

using namespace std;

int main()
{
    int s, t, d;
    cin >> s >> t >> d;

    int time = d / (s * 2);

    cout << time * t << endl;
    return 0;
}

// 13866. 팀 나누기
// 2021.02.26
// 수학
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(min(abs((a + b) - (c + d)), abs((a + c) - (b + d))), abs((a + d) - (b + c))) << endl;
    return 0;
}

// 11943. 파일 옮기기
// 2020.10.30
// 구현
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(a + d, b + c) << endl;
    return 0;
}

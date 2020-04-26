// 1676. 팩토리얼 0의 개수
// 2020.04.26
// 구현
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    // 0이 나오는 경우는 2x5일때이다. n!을 계산할때 5가 2보다 적게 나오므로
    // 5가 나오는 횟수를 세면 된다.
    // 빠른 연산을 위해 5, 25, 125 순으로 나누고 몫을 답에 누적해준다.
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    cout << count << endl;
    return 0;
}

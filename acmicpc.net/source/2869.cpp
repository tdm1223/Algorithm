// 2869. 달팽이는 올라가고 싶다
// 2019.07.09
// 수학, 이분탐색
#include<iostream>

using namespace std;

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
  // v-b 지점까지 이동하는데 걸리는 시간을 계산
  // 나누어 떨어지지 않는다면 + 1을 해준다.
	if ((v - b) % (a - b) == 0)
	{
		cout << (v - b) / (a - b) << endl;
	}
	else
	{
		cout << (v - b) / (a - b) + 1 << endl;
	}
	return 0;
}

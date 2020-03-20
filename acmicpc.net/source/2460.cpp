// 2460. 지능형 기차 2
// 2019.09.03
// 시뮬레이션
#include<iostream>

using namespace std;

int main()
{
	int cur = 0;
	int ans = 0;
	for (int i = 0; i < 10; i++)
	{
		int out, in; // 내린사람, 탄사람의 수
		cin >> out >> in;
		cur = cur - out + in;
		ans = ans > cur ? ans : cur;
	}
	cout << ans << endl;
	return 0;
}

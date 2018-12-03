// 1094. 막대기
// 분류 : 수학, 시뮬레이션
// 2018.10.14
#include<iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int ans = 0;

	//주어진 수를 이진법으로 나타냈을 때 1의 갯수가 정답이 된다.
	for (int i = 0; i < 7; i++)
	{
		if (x % 2 == 1)
		{
			ans++;
		}
		x /= 2;
	}

	cout << ans << endl;
	return 0;
}

// 1173. 운동
// 분류 : 시뮬레이션
// 2018.11.21
#include<iostream>

using namespace std;

int main()
{
	int N, m, M, T, R;
	cin >> N >> m >> M >> T >> R;

	int time = 0; // 운동 시간
	int count = 0;
	int x = m;//초기 맥박은 m
	while (1)
	{
		count++;
		if (x + T <= M) // 운동 가능
		{
			time++;
			x += T;
		}
		else // 휴식
		{
			x -= R;
			if (x < m) // 맥박의 최소는 m
			{
				x = m;
			}
		}
		if (x + T > M && x == m) // 운동을 할 수 없을때
		{
			cout << -1 << endl;
			return 0;
		}
		if (time == N) // 종료조건 
		{
			break;
		}
	}
	cout << count << endl;
	return 0;
}

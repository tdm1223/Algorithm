// 13458. 시험 감독
// 2019.05.22
// 구현
#include<iostream>
#include<algorithm>

using namespace std;

int room[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> room[i];
	}
	int b, c;
	cin >> b >> c;
	long long ans = 0;

	for (int i = 0; i < n; i++)
	{
		room[i] -= b;
		ans++;
		if (room[i] > 0)
		{
			// 몫만큼 빼줌
			int tmp = room[i] / c;
			ans += tmp;
			room[i] -= tmp * c;
			// 그래도 남아있다면 1추가
			if (room[i] > 0)
			{
				ans++;
			}
		}
	}
	// 결과 출력
	cout << ans << endl;
	return 0;
}

// 13300. 방 배정
// 2019.08.07
// 자료구조
#include<iostream>
#include<map>

using namespace std;

map<pair<int, int>, int > m; // key를 {성별, 학년}, value를 학생의 수로 가지고 있는 맵 선언
int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int s, y;
		cin >> s >> y;
		// key가 이미 존재하면 학생수 증가
		if (m.find({s,y}) != m.end())
		{
			m[{s, y}]++;
		}
		// key가 존재하지 않는다면 새로 추가
		else
		{
			m[{s, y}] = 1;
		}
	}
	int ans = 0;
	// 성별, 학년으로 전체 돌면서 값이 있는 경우 계산해줌
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (m.find({ i,j }) != m.end())
			{
				// k로 나눈 몫을 더함
				ans += m[{i, j}] / k;
				// 나머지가 0이 아니면 1을 더함
				if (m[{i, j}]%k != 0)
				{
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}

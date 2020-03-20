// 3663. 고득점
// 2019.06.03
// 그리디 알고리즘
#include<string>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		string name;
		cin >> name;
		int ans = 0;
		int move = name.size() - 1;
		for (int i = 0; i < name.size(); i++)
		{
			int next = i + 1;
			char target = name[i];
			if (target <= 'N')
			{
				ans += target - 'A';
			}
			else
			{
				ans += 'Z' - target + 1;
			}
			// 글자가 A인 경우 next를 1 증가
			while (next < name.size() && name[next] == 'A')
			{
				next++;
			}
			// 현재 위치에서 좌,우 중 작은 수 찾기(i, name.size()-next)
			// 둘 중 작은 거리 * 2 + 긴 거리
			int move2 = i + name.size() - next + min(i, (int)name.size() - next);
			move = min(move, move2);
		}
		ans += move;
		cout << ans << endl;
	}
	return 0;
}

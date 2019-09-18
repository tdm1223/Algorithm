// 1062. 가르침
// 2019.09.18
// 브루트 포스, 시뮬레이션, 문자열 처리
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int n, k;
int ans;
vector<string> s;
int alpa[26] = { 1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0 }; // a, c, i, n, t는 무조건 가르쳐야함
// 21개중에 k-5개를 뽑는 함수
void go(int cnt, int start)
{
	if (cnt == k - 5)
	{
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
		{
			bool flag = true;
			// 현재 글자를 읽을 수 있는지 확인
			for (int j = 0; j < s[i].size(); j++)
			{
				if (alpa[s[i][j] - 'a'] == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				cnt++;

			}
		}
		ans = max(ans, cnt);
		return;
	}

	for (int i = start; i < 26; i++)
	{
		if (alpa[i] == 0)
		{
			alpa[i]++;
			go(cnt + 1, i + 1);
			alpa[i]--;
		}
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;
	s.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	go(0, 0);
	cout << ans << endl;
	return 0;
}

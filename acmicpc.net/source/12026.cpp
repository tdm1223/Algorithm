// 12026. BOJ 거리
// 2019.08.19
// 다이나믹 프로그래밍
#include<iostream>
#include<string>

using namespace std;

int d[1001]; // d[i] : i를 가는데 필요한 에너지 양의 최소값
int n;
string s;
// B->O->J->B ... 순으로 반환하는 함수
char getNext(char a)
{
	if (a == 'B')
	{
		return 'O';
	}
	if (a == 'O')
	{
		return 'J';
	}
	if (a == 'J')
	{
		return 'B';
	}
	return ' ';
}
int go(int idx)
{
	if (idx == n - 1)
	{
		return 0;
	}
	if (d[idx] != -1)
	{
		return d[idx];
	}
	char nextChar = getNext(s[idx]);
	int ans = -1;
	for (int i = idx + 1; i < n; i++)
	{
		if (s[i] == nextChar)
		{
			int tmp = go(i);
			if (tmp != -1)
			{
				int val = (i - idx)*(i - idx) + go(i);
				if (ans == -1 || ans > val)
				{
					ans = val;
				}
			}
		}
	}
	d[idx] = ans;
	return ans;
}
int main()
{
	cin >> n >> s;
	// 초기화
	fill(d, d + n, -1);
	cout<<go(0)<<endl;
	return 0;
}

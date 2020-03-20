// 2331. 반복수열
// 2019.08.05
// 수학
#include<iostream>
#include<map>
#include<cmath>

using namespace std;

int d[10000];
// 입력받은 수의 각 자리수를 p제곱해서 더한 값을 반환하는 함수
int go(int num, int p)
{
	int ans = 0;
	while (num > 0)
	{
		ans += pow(num % 10, p);
		num /= 10;
	}
	return ans;
}
int main()
{
	int a, p;
	cin >> a >> p;

	map<int, bool> m;

	m[a] = true;
	int cnt = 1;
	int re = -1;
	int cur = go(a,p);
	d[0] = a;
	while (1)
	{
		// 이미 한번 나온 숫자라면 종료
		if (m[cur]==true)
		{
			re = cur;
			break;
		}
		d[cnt++]=cur;
		m[cur] = true;
		cur = go(cur, p);
	}

	for (int i = 0; i < cnt; i++)
	{
		if (d[i] == re)
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}

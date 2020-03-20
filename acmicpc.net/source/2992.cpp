// 2992. 크면서 작은 수
// 2020.01.04
// 브루트 포스, 반복문
#include<iostream>
#include<vector>

using namespace std;

int vSize;
vector<int> v;
int visit[6];
int ans = 1000000;
int n;
void go(int cnt, int num)
{
	if (cnt == vSize)
	{
		if (num > n && num < ans)
		{
			ans = num;
		}
		return;
	}
	num *= 10;
	for (int i = 0; i < vSize; i++)
	{
		if (!visit[i])
		{
			visit[i] = 1;
			go(cnt + 1, num + v[i]);
			visit[i] = 0;
		}
	}
}
int main()
{
	cin >> n;
	int k = n;
	while (k > 0)
	{
		v.push_back(k % 10);
		k /= 10;
	}

	vSize = v.size();

	go(0, 0);

	if (ans == 1000000)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << ans << endl;
	}

	return 0;
}

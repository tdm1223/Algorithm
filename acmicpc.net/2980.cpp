// 2980. 도로와 신호등
// 2019.04.10
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct light
{
	int d;
	int r;
	int g;
	int sum = r + g;
};

vector<light> v;
int main()
{
	int n, l;
	cin >> n >> l;

	for (int i = 0; i < n; i++)
	{
		int d, r, g;
		cin >> d >> r >> g;
		v.push_back({ d,r,g });
	}
	int cnt = 0; // 상근이 위치
	int sec = 0; // 총 시간
	while (cnt < l)
	{
		for (int i = 0; i < n; i++)
		{
			// 상근이가 신호등이 있는곳에 있을때
			if (v[i].d == cnt)
			{
				// 빨간불일때
				if (sec%v[i].sum <= v[i].r)
				{
					sec += v[i].r - sec % v[i].sum;
				}
			}
		}
		sec++;
		cnt++;
	}

	cout << sec << endl;
	return 0;
}

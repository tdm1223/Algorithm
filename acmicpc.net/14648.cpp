// 14648. 쿼리 맛보기
// 2019.08.17
// 구현
#include<iostream>
#include<vector>

using namespace std;

int a, b, c, d;
long long sum = 0, sum2 = 0;
void swap(int&a, int&b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, q;
	cin >> n >> q;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	while (q-- > 0)
	{
		int type;
		cin >> type;
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		sum = 0;
		sum2 = 0;
		switch (type)
		{
		// 구간 [a-1,b-1]의 합을 구하고 a-1,b-1 스왑
		case 1:
			cin >> a >> b;
			for (int i = a - 1; i <= b - 1; i++)
			{
				sum += v[i];
			}
			cout << sum << "\n";
			swap(v[a - 1], v[b - 1]);
			break;
		// 구간 [a-1,b-1]의 합에서 구간 [c-1,d-1]의 합을 뺌
		case 2:
			cin >> a >> b >> c >> d;
			for (int i = a - 1; i <= b - 1; i++)
			{
				sum += v[i];
			}
			for (int i = c - 1; i <= d - 1; i++)
			{
				sum2 += v[i];
			}
			cout << sum - sum2 << "\n";
			break;
		}
	}
	return 0;
}

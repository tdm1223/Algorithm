// 13251. 조약돌 꺼내기
// 2019.09.10
// 확률
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int m;
	cin >> m;
	vector<int> v(m);
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> v[i];
		sum += v[i];
	}

	double percentage = 0.0;
	int x;
	cin >> x;
	for (int i = 0; i < m; i++)
	{
		if (v[i] >= x)
		{
			int tmpX = x;
			int tmpSum = sum;
			int tmpVi = v[i];
			double ans = 1.0f;
			// 공식에 맞게 확률 계산
			while (tmpX-- > 0)
			{
				ans *= ((double)tmpVi-- / (double)tmpSum--);
			}
			percentage += ans;
		}
	}
	// 9자리 까지 출력
	cout.precision(9);
	cout << percentage << endl;
	return 0;
}

// 1049. 기타줄
// 2018.10.14
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> package;
	vector<int> piece;
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		package.push_back(a);
		piece.push_back(b);
	}

	sort(package.begin(), package.end());
	sort(piece.begin(), piece.end());

	int ans = 0;
	//가장 작은 값 package[0], piece[0]에 대해서만 계산을 한다. (그리디 알고리즘)
	while (n > 0)
	{
		if (n >= 6 && package[0] < piece[0] * 6) //6개 이상이고 패키지가 저렴할때
		{
			ans += package[0];
			n -= 6;
		}
		else if (n < 6 && package[0] < piece[0] * n) //6개 미만이고 패키지가 저렴할때
		{
			ans += package[0];
			n -= 6;
		}
		else // 낱개구입이 더 저렴할때
		{
			ans += (piece[0] * n);
			n = 0;
		}
	}

	cout << ans << endl;
	return 0;
}

// 2997. 네 번째 수
// 2019.09.03
// 수학, 반복문
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	// -100~100사이의 숫자들이 입력되므로
	// edge case인 -200, -100, 0, 100와 -100, 0, 100, 200인 경우가 있으므로 -200부터 200까지 반복한다.
	for (int i = -200; i <= 200; i++)
	{
		vector<int> x = v;
		x.push_back(i);
		sort(x.begin(), x.end());
		int d1 = x[1] - x[0];
		int d2 = x[2] - x[1];
		int d3 = x[3] - x[2];

		if ((d1 == d2) && (d2 == d3))
		{
			cout << i << endl;
			break;
		}
	}
	return 0;
}

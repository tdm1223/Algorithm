// 10824. 네 수
// 2019.03.07
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	vector<int> v1; // b를 쪼개서 담은 벡터
	vector<int> v2; // d를 쪼개서 담은 벡터
	while (b > 0)
	{
		int tmp = b % 10;
		b /= 10;
		v1.push_back(tmp);
	}

	while (d > 0)
	{
		int tmp = d % 10;
		d /= 10;
		v2.push_back(tmp);
	}

	// b를 a 뒤에 붙임
	for (int i = v1.size() - 1; i >= 0; i--)
	{
		a *= 10;
		a += v1[i];
	}
	// d를 c 뒤에 붙임
	for (int i = v2.size() - 1; i >= 0; i--)
	{
		c *= 10;
		c += v2[i];
	}

	cout << a + c << endl;
	return 0;
}

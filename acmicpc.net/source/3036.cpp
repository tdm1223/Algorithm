// 3036. 링
// 2019.08.26
// 수학
#include<iostream>
#include<vector>

using namespace std;

// 최대 공약수 구하는 함수
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a%b);
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 1; i < n; i++)
	{
		int num = gcd(v[0], v[i]);
		cout << v[0] / num << "/" << v[i] / num << "\n";
	}
	return 0;
}

// 2010. 플러그
// 2019.05.19
// 수학
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		// 전체 연결 할 수 있는 플러그를 계산한다.
		sum += v[i];
	}
	// 멀티탭이 차지하는 플러그의 갯수를 뺀다.
	sum -= (n - 1);

	cout << sum << endl;
	return 0;
}

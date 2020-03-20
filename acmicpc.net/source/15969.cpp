// 15969. 행복
// 2019.05.22
// 수학
#include<iostream>
#include<vector>
#include<algorithm>

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
	// 정렬
	sort(v.begin(), v.end());
	// 가장 높은 점수와 가장 낮은 점수의 차이를 구함
	cout << v[n - 1] - v[0] << endl;
	return 0;
}

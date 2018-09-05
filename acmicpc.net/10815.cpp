// 10815. 숫자카드
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++)
		cin >> b[i];

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		int k = b[i];
		if (binary_search(v.begin(), v.end(), k))
			cout << "1 ";
		else
			cout << "0 ";
	}
	cout << endl;

	return 0;
}

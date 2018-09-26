// 1037. 약수
#include <iostream>
#include <vector>
#include <algorithm>
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

	int ans = 0, tmp = 0;
	if (n == 1)
		ans = v[0] * v[0];
	else
	{
		sort(v.begin(), v.end());
		ans = v[0] * v[n - 1];
	}

	cout << ans << endl;
}

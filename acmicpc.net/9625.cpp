// 9625. BABBA 
#include <iostream>

using namespace std;

int ans[46];

int main()
{
	int k;
	cin >> k;

	ans[0] = 0;
	ans[1] = 1;
	ans[2] = 1;
	for (int i = 3; i <= k; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
	}

	cout << ans[k - 1] << " " << ans[k] << endl;
	return 0;
}

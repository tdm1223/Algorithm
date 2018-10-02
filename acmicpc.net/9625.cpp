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
	//피보나치 수열에서 (주어진 값 -1)이 A의 개수, (주어진 값 -2)가 B의 개수이다.
	for (int i = 3; i <= k; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
	}

	cout << ans[k - 1] << " " << ans[k] << endl;
	return 0;
}

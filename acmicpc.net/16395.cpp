// 16395. 파스칼의 삼각형
// 2019.05.22
// 수학
#include <iostream>

using namespace std;
// 조합 구하는 함수
int nCk(int n, int k)
{
	if (n == k || k == 0)
	{
		return 1;
	}
	else
	{
		return nCk(n - 1, k - 1) + nCk(n - 1, k);
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	cout << nCk(n - 1, k - 1) << endl;
	return 0;
}

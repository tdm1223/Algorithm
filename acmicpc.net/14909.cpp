// 14909. 양수 개수 세기
// 2019.09.11
// 입문용
#include <iostream>

using namespace std;

int main()
{
	int n;
	int ans = 0;
	while (scanf("%d", &n) != EOF)
	{
		if (n > 0)
		{
			ans++;
		}
	}

	cout << ans << endl;
	return 0;
}

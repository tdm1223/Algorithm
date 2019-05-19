// 1920. 수 찾기
// 2019.05.19
// 이분탐색
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int m;
	cin >> m;
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;
		// STL에 있는 binary_search 사용
		if (binary_search(v.begin(), v.end(), tmp))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}

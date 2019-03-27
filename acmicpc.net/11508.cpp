// 11508. 세일
// 201.03.26
#include<iostream>
#include<algorithm>

using namespace std;

int item[100001]; // 유제품 배열
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> item[i];
	}

	int sum = 0;
	// 내림차순 정렬
	sort(item, item + n, greater<int>());

	// 3씩 더하면서 앞에 두개만 계산
	for (int i = 0; i < n; i += 3)
	{
		// 3개가 안될땐 나머지 모두 계산
		if (i + 3 > n)
		{
			int cnt = n - 1;
			for (int j = 0; j < n - i; j++)
			{
				sum += item[cnt--];
			}

			break;
		}
		sum += item[i] + item[i + 1];
	}
	cout << sum << endl;
	return 0;
}

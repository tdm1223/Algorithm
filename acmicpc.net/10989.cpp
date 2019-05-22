// 10989. 수 정렬하기 3
// 2019.05.22
// 정렬
#include<iostream>

using namespace std;

int arr[10001];
int main()
{
	int n, k;
	cin >> n;
  // 숫자가 매우 크므로 정렬대신 배열에 값의 갯수 저장 (카운팅 정렬)
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &k);
		arr[k] += 1;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] > 0)
		{
			for (int j = 0; j < arr[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}

// 11004. K번째 수
// 2019.05.22
// 정렬
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	// 범위가 1~5000000이라 cin,cout쓰면 시간 초과
	int n, k;
	scanf("%d %d", &n, &k);

	int * arr = new int[n];
	int num;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}

	sort(&arr[0], &arr[n]);

	printf("%d", arr[k - 1]);
	delete[]arr;
	return 0;
}

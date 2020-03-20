// 5639. 이진 검색 트리
// 2019.05.21
// 트리, 자료구조
#include<iostream>
#include<algorithm>

using namespace std;

int arr[10010];
void go(int l, int r)
{
	if (l > r)
	{
		return;
	}
	int root = l;
	int s = l;
	int e = r;
	while (arr[s] >= arr[root])
	{
		s++;
	}
	while (arr[e] > arr[root])
	{
		e--;
	}
	go(s, e);
	go(e + 1, r);
	printf("%d\n", arr[root]);
}
int main()
{
	int x;
	int n;
	// 전위순회한 결과 입력
	while (scanf(" %d", &x) != -1)
	{
		arr[n++] = x;
	}
	// 전위->후위로 바꿈
	go(0, n - 1);
	return 0;
}

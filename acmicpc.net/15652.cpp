// 15652. N과 M (4)
// 2019.03.07
#include<iostream>

using namespace std;

int arr[7];
int n, m;
void go(int cnt, int idx)
{
	if (cnt == m)
	{
		for (int i = 0; i < cnt; i++)
		{
			printf("%d ", arr[i] + 1);
		}
		printf("\n");
		return;
	}

	for (int i = idx; i < n; i++)
	{
		arr[cnt] = i;
		go(cnt+1,i);
	}
}
int main()
{
	scanf("%d %d", &n, &m);
	go(0,0);

	return 0;
}

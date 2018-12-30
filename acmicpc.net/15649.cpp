// 15649. N과 M (1)
// 2018.12.30
#include<iostream>

using namespace std;

int n, m;
bool visit[10];
int arr[10];

void go(int count)
{
	// m개만큼 다 뽑았을 때
	if (count == m)
	{
		for (int i = 0; i < m; i++)
		{
			// cout 사용시 시간초과
			printf("%d ", arr[i] + 1);
		}
		printf("\n");
	}

	for (int i = 0; i < n; i++)
	{
		// 중복을 피하기 위해 visit배열 체크
		if (!visit[i])
		{
			visit[i] = true;
			arr[count] = i;
			go(count + 1);
			visit[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	go(0);
	return 0;
}

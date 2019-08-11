// 15650. N과 M (2)
// 2019.05.22
// N과 M
// https://tdm1223.tistory.com/104
#include<iostream>

using namespace std;

int n, m;
bool visit[10];
int arr[10];

void go(int count, int min)
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

	for (int i = min; i < n; i++)
	{
		// 중복을 피하기 위해 visit배열 체크
		if (!visit[i])
		{
			visit[i] = true;
			arr[count] = i;
			go(count + 1, i + 1); // 오름차순으로 뽑아야 하기에 최솟값을 i+1로 해서 매개변수를 전달
			visit[i] = false;
		}
	}
}

int main()
{
	cin >> n >> m;
	go(0, 0);
	return 0;
}

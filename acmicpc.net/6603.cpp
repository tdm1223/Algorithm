// 6603. 로또
// 2019.05.21
// BFS, DFS, 브루트 포스, 백트래킹, 입문용
#include<iostream>

using namespace std;

int lotto[13];
int ans[13];
int k;

// DFS로 재귀의 과정을 통해 수열을 찾음
void DFS(int start, int depth)
{
	//탈출조건
	if (depth == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			// 조합하나를 출력한 뒤 탈출
			cout << ans[i] << ' ';
		}
		cout << '\n';
		return;
	}
	// lotto배열 0부터 k-1까지 탐색함
	for (int i = start; i < k; i++)
	{
		ans[depth] = lotto[i]; // depth는 깊이 -> 0~5번째 깊이까지 재귀를통해 새로 탐색한 숫자를 넣음.
		DFS(i + 1, depth + 1); // 재귀 들어가는 부분 , 하나의 깊이를 탐색 후 저장했으니 다음 함수호출할때는 깊이+1을 해줘야함.
	}
}
int main()
{
	while (1)
	{
		cin >> k;
		if (k == 0)
		{
			break;
		}
		//0을 입력 받을 때 까지 무한루프
		for (int i = 0; i < k; i++)
		{
			cin >> lotto[i];
		}
		DFS(0, 0);
		cout << '\n';
	}
	return 0;
}

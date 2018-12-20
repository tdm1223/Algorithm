// 10159. 저울
// 분류 : 플로이드 와샬 알고리즘
// 2018.12.20
#include<iostream>

using namespace std;

int d[101][101];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int from, to;
		cin >> from >> to;
		//대소방향을 나타내기 위해 1과 -1로 저장
		d[from][to] = 1;
		d[to][from] = -1;
	}

	// 1>2, 2>3 일때 1>3인 경우들을 찾는 과정
	for (int i = 1; i <= n; i++)
	{
		for (int from = 1; from <= n; from++)
		{
			// from 과 i의 대소관계가 없는 상태면 무시
			if (d[from][i] == 0)
			{
				continue;
			}
			for (int to = 1; to <= n; to++)
			{
				// from과 i의 대소 관계 방향과 i와 to의 대소 관계 방향이 같다면
				// from과 to의 대소관계도 같게 해줌.
				if (d[from][i] == d[i][to])
				{
					d[from][to] = d[from][i];
				}
			}
		}
	}

	// 대소관계가 기록되지 않은 것의 갯수를 출력.
	for (int i = 1; i <= n; i++)
	{
		int sum = 0;
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == 0 && (i!=j))
			{
				sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}

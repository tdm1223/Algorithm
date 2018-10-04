// 11279. 최대힙
#include <iostream>
#include <queue>
#include <cstdio>

using namespace std;

priority_queue<int> q; //힙에 사용할 우선순위 큐 선언
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a); //cin으로 입력받으면 시간 초과가 뜬다.
		if (a == 0)
		{
			if (q.empty())
			{
				printf("0\n");//비어있다면 0을 출력
			}
			else
			{
				printf("%d\n", q.top()); //가장 큰 값 출력
				q.pop();
			}
		}
		else
		{
			q.push(a);
		}
	}
	return 0;
}

// 11866. 조세퍼스 문제 0
// 2019.04.02
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n, k;
	queue<int> q;
	cin >> n >> k;
	// 1부터 n까지 큐에 넣음
	for (int i = 1; i<=n; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		// k번 이동
		for (int i = 0; i < k - 1; i++)
		{
			q.push(q.front());
			q.pop();
		}

		// 제거해야될 수 출력
		cout << q.front();
		q.pop();

		// 비어있지 않다면 , 출력
		if (!q.empty())
		{
			cout << ", ";
		}
	}
	cout << ">" << endl;
	return 0;
}

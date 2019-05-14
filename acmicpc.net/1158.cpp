// 1158. 조세퍼스 문제
// 2019.05.14
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	queue<int> q;
	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (!q.empty())
	{
		if (q.size() == 1)
		{
			cout << q.front() << ">" << endl;
			break;
		}
		// m번째 사람을 제거
		for (int i = 1; i < m; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	return 0;
}

// 1158.조세퍼스 문제
#include<iostream>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

string d[251];
int main()
{
	int n,m;
	cin >> n >> m;
	queue<int> q;

	for (int i = 1; i <= n; i++)
		q.push(i);

	cout << "<";
	while (!q.empty())
	{
		if (q.size() == 1)
		{
			cout << q.front() << ">" << endl;
			break;
		}
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

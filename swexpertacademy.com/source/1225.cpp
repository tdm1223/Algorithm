// 1225. 암호생성기
// 2019.07.04
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		queue<int> q;
		int t;
		cin >> t;
		int x;
		for (int j = 0; j < 8; j++) {
			cin >> x;
			q.push(x);
		}
		int count = 0;
		while (true)
		{
			int tmp = q.front();
			tmp -= (count + 1);
			count = (count + 1) % 5;
			// 종료조건. 0보다 작아질 때
			if (tmp <= 0)
			{
				q.push(0);
				q.pop();
				break;
			}
			q.push(tmp);
			q.pop();
		}
		cout << "#" << t << " ";
		while (!q.empty())
		{
			cout << q.front() << " ";
			q.pop();
		}
		cout << endl;
	}
	return 0;
}

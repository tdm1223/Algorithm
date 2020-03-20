// 2075. N번째 큰 수
// 2019.09.01
// 자료구조, 힙
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, num;
	priority_queue<int,vector<int>,greater<int>> pq; // 최소힙

	cin >> n;
	for (int i = 0; i < n*n; i++)
	{
		cin >> num;
		// 힙의 크기가 n보다 작으면 그냥 추가함
		if (pq.size() < n)
		{
			pq.push(num);
		}
		// 힙의 크기가 n보다 크거나 같으면 num과 힙의 top 비교
		else
		{
			// num이 더 크다면 top에있는걸 제거한후 num을 push
			if (pq.top() < num)
			{
				pq.pop();
				pq.push(num);
			}
		}
	}

	// 힙의 top이 n번째로 큰 수가 된다.
	cout << pq.top() << endl;
	return 0;
}

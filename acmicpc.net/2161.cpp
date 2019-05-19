// 2161. 카드1
// 2019.05.19
// 시뮬레이션
#include<iostream>
#include<deque>

using namespace std;

int main()
{
	int n;
	cin >> n;
	deque<int> dq;
	for (int i = 0; i < n; i++)
	{
		dq.push_back(i + 1);
	}
	while (dq.size() != 1)
	{
		cout << dq.front() << " ";
 		// 제일 위에 있는 카드를 버린다.
		dq.pop_front();
		// 그 다음, 제일 위에 있는 카드를 맨아래로 옮긴다.
		dq.push_back(dq.front());
		dq.pop_front();
	}
	cout << dq.front() << endl;
	return 0;
}

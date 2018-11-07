// 2164. 카드2
// 2018.11.07
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
		dq.pop_front();
		dq.push_back(dq.front());
		dq.pop_front();
	}
	cout << dq.front() << endl;
	return 0;
}

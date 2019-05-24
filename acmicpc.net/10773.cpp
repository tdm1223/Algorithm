// 10773. 제로
// 2019.05.24
// 스택
#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int k;
	cin >> k;
	stack<int> s;
	for (int i = 0; i < k; i++)
	{
		int num;
		cin >> num;
		// 문제 조건 : 정수가 "0"일 경우에 지울 수 있는 수가 있음을 보장할 수 있다.
		// 따라서 예외처리를 하지 않아도 된다.
		if (num == 0)
		{
			s.pop();
		}
		else
		{
			s.push(num);
		}
	}

	int ans = 0;
	while (!s.empty())
	{
		ans += s.top();
		s.pop();
	}
	cout << ans << endl;
	return 0;
}

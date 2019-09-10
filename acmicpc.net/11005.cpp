// 11005. 진법 변환 2
// 2019.09.10
// 진법
#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	stack<char> s;
	while (n > 0)
	{
		if (n%k > 9)
		{
			s.push(char((n%k) - 10 + 'A'));
		}
		else
		{
			s.push(n%k + '0');
		}
		n /= k;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}

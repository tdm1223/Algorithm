// 10829. 이진수 변환
// 2019.09.10
// 진법
#include<iostream>
#include<stack>

using namespace std;

int main()
{
	long long k; // 입력의 범위가 100000000000000까지이므로 long long
	cin >> k;
	stack<int> s;
	while (k > 0)
	{
		s.push(k % 2);
		k /= 2;
	}
	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}

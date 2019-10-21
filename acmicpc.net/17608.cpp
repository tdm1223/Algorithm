// 17608. 막대기
// 2019.10.21
// 스택
#include<iostream>
#include<stack>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int top = -1;
	// 오른쪽에서 보기 때문에 거꾸로 확인해야한다.
	// 거꾸로 확인하기 위해 스택을 사용한다.
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		s.push(k);
	}

	int ans = 0;
	while (!s.empty())
	{
		if (top < s.top())
		{
			top = s.top();
			ans++;
		}
		s.pop();
	}
	cout << ans << "\n";
	return 0;
}

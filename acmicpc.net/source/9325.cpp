// 9325. 얼마?
// 2019.09.06
// 수학, 사칙연산
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t-- > 0)
	{
		int s;
		cin >> s;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int a, b;
			cin >> a >> b;
			s += a * b;
		}
		cout << s << endl;
	}
	return 0;
}

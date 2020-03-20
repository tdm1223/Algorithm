// 15552. 빠른 A+B
// 2019.05.22
// 수학
#include<iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	while (n > 0)
	{
		n--;
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}
	return 0;
}

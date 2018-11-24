// 5612. 터널의 입구와 출구
// 2018.11.24
#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int in, out;
		cin >> in >> out;
    // 현재 터널안에 있는 차의 수에 들어온차와 나간차의 차이를 더함
		m += (in - out);
    // 예외 처리
		if (m < 0)
		{
			ans = 0;
			break;
		}
		if (ans < m)
		{
			ans = m;
		}
	}
	cout << ans << endl;
	return 0;
}

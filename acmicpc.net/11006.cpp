// 11006. 남욱이의 닭장
// 2018.10.15
#include<iostream>

using namespace std;

int main()
{
	int t, n, m;
	cin >> t;
	while (t > 0)
	{
		t--;
		cin >> n >> m;
		int a = n - m;// 다리가 2개인 닭의 수 = 닭의 다리수 - 닭(다리가 1개)
		cout << m - a << " " << a << endl;
	}

	return 0;
}

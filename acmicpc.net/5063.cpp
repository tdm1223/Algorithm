// 5063. TGN
// 2019.05.21
// 구현
#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		t--;
		long long r, e, c;
		cin >> r >> e >> c;
		// 광고를 해야할 때
		if (r < e - c)
		{
			cout << "advertise" << endl;
		}
		// 하지 않아야 할 때
		else if (r > e - c)
		{
			cout << "do not advertise" << endl;
		}
		// 광고를 해도 수익 차이가 없을 때
		else if (r == e - c)
		{
			cout << "does not matter" << endl;
		}
	}

	return 0;
}

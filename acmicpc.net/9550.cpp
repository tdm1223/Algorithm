// 9550. 아이들은 사탕을 좋아해
// 2018.10.15
#include <iostream>

using namespace std;

int main()
{
	//n : 사탕 종류의 수 / k : 아이들이 최소로 먹는 사탕의 수
	int t, n, k;
	cin >> t;
	while (t > 0)
	{
		int count = 0;
		t--;
		cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			int ans = c / k;
			count += ans;
		}
		cout << count << endl;
	}
	return 0;
}

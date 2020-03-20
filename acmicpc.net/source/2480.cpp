// 2480. 주사위 세개
// 2019.09.03
// 입문용
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> v(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	// 처음과 마지막이 같으면 세수가 같음
	if (v[0] == v[2])
	{
		cout << 10000 + v[0] * 1000 << endl;
	}
	// 앞의 두수가 같음
	else if (v[0] == v[1])
	{
		cout << 1000 + v[0] * 100 << endl;
	}
	// 뒤의 두수가 같음
	else if (v[1] == v[2])
	{
		cout << 1000 + v[1] * 100 << endl;
	}
	// 세수 모두 다름
	else
	{
		cout << v[2] * 100 << endl;
	}
	return 0;
}
